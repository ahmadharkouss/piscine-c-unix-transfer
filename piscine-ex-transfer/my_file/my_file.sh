#!/bin/sh
for n in "$@"; do
   if [ -f "${n}" ]; then
   echo "${n}: file"
   else
       if [ -d "${n}" ]; then
       echo "${n}: directory" 
       else 
           echo "${n}: unknown" 
       fi
   fi
  
done