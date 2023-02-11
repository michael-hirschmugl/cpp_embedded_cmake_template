#!/bin/bash

st-info --probe
cd cmake-build-debug
st-flash write nucleo-f031k6.bin 0x8000000

