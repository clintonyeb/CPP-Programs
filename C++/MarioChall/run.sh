#!/usr/bin/env bash

file=$1

if [ ${file: -4} == ".cpp" ]
then
  file=$(echo $file | cut -f 1 -d '.')
fi

#echo "Running: $file..."

# compiling
g++ -std=c++11 -o "$file" "$file.cpp";

#running
./$file

rm $file
