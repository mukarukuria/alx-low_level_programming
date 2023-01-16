#!/bin/bash
files = ""
for file in ./*.c; do
	files = "$files $file"
done

gcc gcc -Wall -pedantic -Werror -Wextra -c $files
gcc -shared -o liball.so *.o
