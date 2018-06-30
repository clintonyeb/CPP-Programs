#!/usr/bin/env bash

file=$1

if [ ${file: -4} == ".cpp" ]
then
  file=$(echo $file | cut -f 1 -d '.')
fi

#create file
touch $file.cpp

/bin/cat <<EOM >$file.cpp
#include <stdio.h>

int main() {

  return 0;
}

EOM
