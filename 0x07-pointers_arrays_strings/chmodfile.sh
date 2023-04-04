#!/bin/bash

if [ -z $@ ]
then
        echo "Please give me a file"
exit 1
fi


PASSED=$@
if [ -x $PASSED ]
then
        echo "This file has a excute"
elif [ -e $PASSED ]
then
        chmod +x $PASSED
        echo "Done"
else
        echo "This file does not exist"
fi
