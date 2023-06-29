#!/bin/bash -eux

# This is a helper script to copy Picknik finished configs into a base/site config generated
# by MoveIt Setup Assistant.

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
cd $SCRIPT_DIR

CONFIG_DIR=../src/ur_base_config

# Copy config files
cp config/base_config.yaml ${CONFIG_DIR}/config/
cp config/initial_positions.yaml ${CONFIG_DIR}/config/
cp config/cameras.yaml ${CONFIG_DIR}/config/
cp config/realsense_config_high_accuracy.json ${CONFIG_DIR}/config/
cp -r config/control/ ${CONFIG_DIR}/config/
cp -r config/moveit/ ${CONFIG_DIR}/config/

# Copy Launch files
cp -r launch ${CONFIG_DIR}/

# Copy Description files
mkdir -p ${CONFIG_DIR}/description
cp description/robot.urdf ${CONFIG_DIR}/description

# Rearrange MSA generated files for consistency
mv ${CONFIG_DIR}/config/ur5e.srdf ${CONFIG_DIR}/config/moveit/
mv ${CONFIG_DIR}/config/pilz_cartesian_limits.yaml ${CONFIG_DIR}/config/moveit/
