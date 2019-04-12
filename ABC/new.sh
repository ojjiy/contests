#! /bin/bash
if [ $# -ne 1 ]; then
	echo "Specify number" 1>&2
	exit 1
fi

if [ -e $1 ]; then
	cd $1
else
	cp -r tmpl $1
	cd $1
fi

