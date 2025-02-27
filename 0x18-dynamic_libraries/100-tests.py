#!/usr/bin/env python3
"""Import and use a C library."""

import ctypes
import random

cops = ctypes.CDLL("./100-operations.so")
a = random.randint(-111, 111)
b = random.randint(-111, 111)

print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))

a = 0
b = 9
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
print("{} / {} = {}".format(b, a, cops.div(b, a)))
print("{} % {} = {}".format(b, a, cops.mod(b, a)))
