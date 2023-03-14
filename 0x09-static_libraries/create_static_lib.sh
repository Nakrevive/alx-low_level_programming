#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create a static library named liball.a from the object files
ar rcs liball.a *.o

# Remove the object files
rm *.o

