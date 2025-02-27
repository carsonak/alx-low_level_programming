#!/bin/bash
gcc -x c -shared -o /lib/hacked_rand.so - <<< "$(curl -L --no-progress-meter https://github.com/carsonak/alx-low_level_programming/raw/refs/heads/main/0x18-dynamic_libraries/hacked_rand.c)"
export LD_PRELOAD='/lib/hacked_rand.so'
