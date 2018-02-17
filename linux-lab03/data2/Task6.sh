#!/bin/bash

for d in *
do
	lastfour=$(echo -n $d|tail -c 4)
	if [ "$lastfour" == "data" ] && [ -f "$d" ]; then
		backup_found=false
		for b in *
		do
			if [ "$b" == "$d.bak" ]; then
				backup_found=true
			fi
		done
		if [ "$backup_found" == "false" ]; then
			touch "$d.bak"
		fi
	fi
done
