#!/bin/bash
mv disorganized_structure organized_structure
cd organized_structure
mkdir entertainment recipes sports technology travel
mv entertainment*.txt entertainment
mv recipes*.txt recipes
mv sports*.txt sports
mv tech*.txt technology
mv travel*.txt travel
ls -l >>output.txt
ls -l entertainment>>output.txt
ls -l recipes>>output.txt
ls -l sports>>output.txt
ls -l technology>>output.txt
ls -l travel>>output.txt
cd ..
