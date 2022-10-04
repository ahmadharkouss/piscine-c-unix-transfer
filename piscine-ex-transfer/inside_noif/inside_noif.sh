#!/bin/sh
[ "$#" -ne 1 ] && echo "Sorry, expected 1 argument but $# were passed" && exit 1 

[ ! -f "${1}" ] &&  printf "${1}:\n" && printf "\tis not a valid file\n" && exit 2
 cat "${1}"