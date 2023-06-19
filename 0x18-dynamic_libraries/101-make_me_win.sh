#!/bin/bash
wget -P /tmp https://github.com/AMdabour/alx-low_level_programming/blob/master/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
