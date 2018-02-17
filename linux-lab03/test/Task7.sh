#!/bin/bash

if [ -e "task7d" ]; then
	exit 1
else
	cdate=$(date +%s)
	mkdir $cdate
	for((i=1;i<=10;i++))
	do
		if [ ! -e "$cdate/random$i.dat" ]; then
		touch $cdate/random$i.dat
		for j in {1..50}
		do
			echo $RANDOM >> $cdate/random$i.dat
		done
		else
		echo "The file already exists"
		fi
	done
	
	echo "done"
	exit 0
fi
