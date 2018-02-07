#!/bin/bash

dir_files=$(ls)
booleanc=0
for file in ${dir_files}
do
	if [ -d ${file} ]; then
		echo "${file} is a directory"
		boolean=1
	fi
done
if [ ${boolean} ]; then
	echo "This directory is not the end of a branch"
fi
