#!/usr/bin/env python3
from sys import stdin
import sys
import re

integer = "(0|-?[1-9]\d*)"

MAX = 10**15

cases = 0

input_params = stdin.readline()
inputstring = input_params.strip("\n")
input_split = inputstring.split()
assert len(input_split) == 2
assert re.match(integer, input_split[0])
assert re.match(integer, input_split[1])
assert int(input_split[0]) <= 1000 and int(input_split[0]) >= 1
assert int(input_split[1]) <= 1000 and int(input_split[1]) >= 1

total_lines = int(input_split[0]) + int(input_split[1])


while True:
    line = stdin.readline()
    if len(line) == 0 or line == "\n":
        break
    line = line.strip("\n")
    line_vals = line.split()
    assert len(line_vals) == 2
    assert re.match(integer, line_vals[0])
    assert re.match(integer, line_vals[1])
    assert int(line_vals[0]) >= 0 and int(line_vals[0]) <= 10000
    assert int(line_vals[1]) >= 0 and int(line_vals[1]) <= 10000
    cases += 1

assert cases == int(total_lines)

# Nothing to report
sys.exit(42)
