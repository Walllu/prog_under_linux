#!/bin/bash

# create the directory structure
# ./data/
# ./data/processed/
# ./docs/

if [ ! -e "./data/" ]; then
	mkdir ./data/
else
	echo "./data/ already exists"
	exit 1
fi
if [ ! -e "./data/processed/" ]
then
	mkdir ./data/processed/
else
        echo "./data/processed/ already exists"
        exit 1
fi
if [ ! -e "./docs/" ]
then
	mkdir ./docs/
else
        echo "./docs/ already exists"
        exit 1
fi

exit 0
