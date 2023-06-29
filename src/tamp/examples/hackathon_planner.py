#!/usr/bin/env python3

"""
Task Planning ROS 2 service server
"""

import os
import rclpy
from rclpy.node import Node

from pddlstream.algorithms.focused import solve_adaptive
from pddlstream.language.constants import And, PDDLProblem
from pddlstream.utils import read

from ament_index_python.packages import get_package_share_directory

from geometry_msgs.msg import PoseStamped
from tamp_msgs.msg import PickPlaceAction
from tamp_msgs.srv import PlanBlockSorting

class PlannerNode(Node):
    def __init__(self):
        super().__init__("hackathon_planner")
        self.srv = self.create_service(PlanBlockSorting, "/plan_tasks", self.planning_callback)

    def planning_callback(self, request, response):
        self.get_logger().info("Got task planning request!")

        pkg_folder = get_package_share_directory("tamp")
        domain_pddl_file = os.path.join(pkg_folder, "domains", "domain.pddl")
        domain_pddl = read(domain_pddl_file)

        # This is the initial state.
        # Right now it's hard-coded
        init = [
            ("Robot", "r"),
            ("Location", "p1"),
            ("Location", "p2"),
            ("Location", "p3"),
            ("Location", "p4"),
            ("Location", "pswap"),
            ("IsFree", "pswap"),
            ("Obj", "bc"), ("At", "bc", "p1"),
            ("Obj", "bm"), ("At", "bm", "p2"),
            ("Obj", "by"), ("At", "by", "p3"),
            ("Obj", "bk"), ("At", "bk", "p4"),
        ]

        # Package up the goal literals from the service request.
        # This should always enforce that the swap pose is free
        goal_literals = [("IsFree", "pswap")]
        for idx, block_id in enumerate(request.block_ids):
            goal_literals.append(
                ("At", f"b{block_id}", f"p{idx+1}")
            )
        print(goal_literals)
        goal = And(*goal_literals)

        # Do the planning
        prob = PDDLProblem(
            domain_pddl,
            {},
            None,
            {},
            init,
            goal,
        )
        solution = solve_adaptive(
            prob,
            verbose=False,
            planner="ff-astar",
        )

        # Package up the solution into the service response.
        print(solution.plan)
        if not solution.plan:
            return response
        actions = []
        for idx, act in enumerate(solution.plan):
            print(f"Action: {idx}: {act}")
            actions.append(
                PickPlaceAction(
                    action_id = idx,
                    block_id = act.args[1],
                    pick_pose = PoseStamped(),
                    place_pose = PoseStamped(),
                )
            )
        response.plan.actions = actions
        return response


def main():
    rclpy.init()
    planner_node = PlannerNode()

    try:
        rclpy.spin(planner_node)
    except KeyboardInterrupt:
        pass
    finally:
        planner_node.on_shutdown()
        planner_node.destroy_node()
        rclpy.shutdown()


if __name__ == "__main__":
    main()
