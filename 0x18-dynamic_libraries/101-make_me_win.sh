#!/bin/bash
gcc -x c -shared -o /lib/hacked_rand.so - <<< 'int rand(void) {static int i; int wining_numbers[] = {8, 8, 7, 9, -5, 23}; ++i; return (wining_numbers[i - 1]); }'
export LD_PRELOAD='/lib/hacked_rand.so'
