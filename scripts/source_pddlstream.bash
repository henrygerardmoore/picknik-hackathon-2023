#!/bin/bash

# Add pddlsteeam to Python path
SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
PDDLSTREAM_PATH=$SCRIPT_DIR/../dependencies/pddlstream
if [ -d "$PDDLSTREAM_PATH" ]
then
    export PYTHONPATH=$PDDLSTREAM_PATH:$PYTHONPATH
fi
