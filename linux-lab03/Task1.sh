#!/bin/bash

# create the directory structure
# ./data/
# ./data/processed/
# ./docs/

if [ ! -e "./data/" ]; then
	mkdir ./data/
fi
if [ ! -e "./data/processed/" ]
then
	mkdir ./data/processed/
fi
if [ ! -e "./docs/" ]
then
	mkdir ./docs/
fi

exit 0
