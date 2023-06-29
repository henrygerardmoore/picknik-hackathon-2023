from setuptools import find_packages
from setuptools import setup

setup(
    name='apriltag_ros_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('apriltag_ros_msgs', 'apriltag_ros_msgs.*')),
)
