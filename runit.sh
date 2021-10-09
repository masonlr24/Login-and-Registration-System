#!/bin/bash

fg++ *.cpp -o $1

if (( $? == 0 )); then
  ./$1
else 
  echo "Program didn't compile."
fi