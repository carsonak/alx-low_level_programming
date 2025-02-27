#!/usr/bin/env bash
# Creates a dynamic library from all C files in current directory.

gcc -Wall -pedantic -Werror -Wextra -fPIC -shared *.c -o liball.so
