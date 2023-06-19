#!/bin/bash
wget -p /tmp https://github.com/AMdabour/alx-low_level_programming/blob/master/0x18-dynamic_libraries/liball.so
export LD_PRELOAD=/tmp/liball.so
