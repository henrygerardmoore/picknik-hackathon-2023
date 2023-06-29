from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch.substitutions import TextSubstitution
from launch_ros.actions import Node


def generate_launch_description():
    planner_node = Node(
        package="tamp",
        executable="hackathon_planner.py",
        name="hackathon_planner",
        output="screen",
        emulate_tty=True,
    )
    return LaunchDescription([planner_node])
