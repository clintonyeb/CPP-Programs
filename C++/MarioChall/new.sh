#!/usr/bin/env bash

file=$1

if [ ${file: -4} == ".cpp" ]
then
  file=$(echo $file | cut -f 1 -d '.')
fi

#test if file exists
if [ -f "$file.cpp" ]; then
  read -p "File already exists, overrite it? " -n 1 -r
  echo
  if [[ ! $REPLY =~ ^[Yy]$ ]]
  then
    [[ "$0" = "$BASH_SOURCE" ]] && exit 1 || return 1 # handle exits from shell or function but don't exit interactive shell
  fi
fi

#create file
touch $file.cpp

/bin/cat <<EOM >$file.cpp
#include <cstdio>

int main() {

  return 0;
}

EOM

echo "Done!"
