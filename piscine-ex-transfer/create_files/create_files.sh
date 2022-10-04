#!/bin/sh

touch ' ' 
chmod 644 ' ' 
touch '\'
chmod 644 '\'
touch -- \-\-
chmod 644 -- \-\-
touch '|'
chmod 644 '|'
touch '"'
chmod 644 '"'
touch \'''
chmod 644 \'''
touch -- \-\-\$\i\*\'\"\\
chmod 644 -- \-\-\$\i\*\'\"\\
touch "# Exams are fun!"
touch -- ';`kill -9 0`'
for num in $(seq 1 50); do
    mkdir "$num"
    cd    "$num"    
done
touch farfaraway
chmod 644 farfaraway


