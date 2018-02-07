#!/bin/bash

echo "${RANDOM}"

if [ ! -e "./random.txt/" ]; then
	touch ./random.txt/
fi

for val in {1..100}
do
	$RANDOM >> ./random.txt/
done
