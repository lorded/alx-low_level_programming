#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.s#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -c -fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
