#!/bin/bash
# usage: ./driver.sh <root dir> <root progs>
# echo "Starting pipline with dataPath=$1/DUC/Floor1"
# ./pipeLine.sh $1/DUC/Floor1
echo "Starting pipline with dataPath=$1/DUC/Floor2"
./pipeLine.sh $1/DUC/Floor2 $2
echo "Starting pipline with dataPath=$1/CSE/Floor3"
./pipeLine.sh $1/CSE/Floor3 $2
echo "Starting pipline with dataPath=$1/CSE/Floor4"
./pipeLine.sh $1/CSE/Floor4 $2
echo "Starting pipline with dataPath=$1/CSE/Floor5"
./pipeLine.sh $1/CSE/Floor5 $2
