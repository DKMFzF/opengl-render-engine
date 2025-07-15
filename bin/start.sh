#!/bin/bash

PROJECT_ROOT="$(dirname "$(realpath "$0")")/.."
source "$PROJECT_ROOT/bin/utils/logger.sh"

if [ $# -eq 0 ]; then
    logger "ERROR" "Not argument path to start file"
    exit 1
fi

PATH_TO_START_FILE=$1
#BUILD_FILE_NAME="engine_$(date +%s)"
#PATH_TO_OUTPUT_FILE="./build/$BUILD_FILE_NAME"

logger "LOG" "Create folder build"
mkdir -p "./build"
cd "./build"
rm -rf "./*"

logger "LOG" "Compiling Engine..."

cmake ..
make

logger "LOG" "Compiled done"
logger "LOG" "Start Engine"

./engine

#if g++ "$PATH_TO_START_FILE" -o "$PATH_TO_OUTPUT_FILE" -lglfw -lGLEW -lGL; then
   #chmod +x "$PATH_TO_OUTPUT_FILE"
   #logger "LOG" "Running $PATH_TO_OUTPUT_FILE..."
   #"$PATH_TO_OUTPUT_FILE"
#else
    #logger "ERROR" "Compiling failed"
    #exit 1
#fi

