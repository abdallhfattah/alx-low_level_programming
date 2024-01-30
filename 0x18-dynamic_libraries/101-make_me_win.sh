#!/bin/bash
wget -P .. https://github.com/abdallhfattah/alx-low_level_programming/master/0x18-dynamic_libraries
export LD_PRELOAD="$PWD/../libgiga.so"