#!/bin/sh
if test ! $# -eq 1;then
    echo "Sorry, expected 1 argument but $# were passed"
    exit 1
else
    if [ -f "${1}" ];then
        cat ${1}
     else
     echo "${1}:\n	is not a valid file"
     exit 2
    fi
fi
