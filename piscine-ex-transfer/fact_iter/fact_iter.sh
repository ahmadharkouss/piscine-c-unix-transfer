#!/bin/sh
if [ $# -ne 1 ]; then
    exit 1
else
   n=${1}
   fac=1
   while [ $n -ne 0 ]; do
      fac=$((fac*n))
      n=$((n-1))
   done
   echo "$fac"
fi
   