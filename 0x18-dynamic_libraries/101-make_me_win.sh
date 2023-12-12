#!/bin/bash
wget -P /tmp https://github.com/Bouayadihamid/alx-low_level_programming.git/tree/79b8b822500b32858c36ff9b5b5f2cabd8868b72/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
