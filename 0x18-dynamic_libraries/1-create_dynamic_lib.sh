#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c -fPIC *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up: remove the object files
rm *.o
