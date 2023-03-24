#!/bin/bash
gcc *.o -fPIC -shared -o librun.so
LD_PRELOAD=$WPD/libruin.so
