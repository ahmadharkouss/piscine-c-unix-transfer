#!/bin/sh
if [ $# -ne 2 ]; then
    echo "Usage: ./hcf.sh num1 num2"
    exit 1
elif [ ${2} -eq 0 ]; then
    echo ${1}
else
   a=${1}
   b=${2}
   r=1
    while [ $r -ne 0 ]; do
    r=$((a%b))
    a=$b
    b=$r 
    done
    echo "$a"
   
fi