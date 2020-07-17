
from sys import exit
import re
import math

text = input("Enter text to be checked: ")

w = 1
s = 0
l = 0
for c in text:
    if re.match(r'\b',c):
        l = l + 1
    elif re.match(r'\s',c):
        w = w + 1
    elif re.match('.',c):
        s = s + 1
    elif re.match('?',c):
        s = s + 1
    elif re.match('!',c):
        s = s + 1

compute = 100 / w

L = l*compute
S = s*compute

index = 0.0588 * L - 0.296 * S - 12.8

print(math.ceil(index))
