from setuptools import setup, find_packages


project_name = "tamp"
setup(
    name=project_name,
    version="0.0.0",
    url="https://github.com/sea-bass/pyrobosim",
    author="Sebastian Castro",
    description="ROS 2 task planner for block sorting.",
    license="MIT",
    install_requires=[],
    packages=find_packages(),
    zip_safe=True,
)
