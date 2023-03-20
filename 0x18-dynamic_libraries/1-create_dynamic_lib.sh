#!/bin/bash

# Compile each .c file into an object file
for file in *.c
do
    gcc -c -fPIC $file
done

# Link all the object files into a dynamic library
gcc -shared -o liball.so *.o

# Remove the object files
rm *.o
