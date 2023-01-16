#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c $files
gcc -shared -o liball.so *.o
