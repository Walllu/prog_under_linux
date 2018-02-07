#!/bin/bash
for par in $@
do
	if [ -e "${par}" ]; then
		if [ -d "${par}" ]; then
			echo "${par} is a directory"
		elif [ -f "${par}" ]; then
			echo "${par} is a file"
		fi
	else
		echo "${par} does not exist"
	fi
done
echo "done"
