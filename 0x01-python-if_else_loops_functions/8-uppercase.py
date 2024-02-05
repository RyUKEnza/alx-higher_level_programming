#!/usr/bin/python3
def uppercase(str):
    for c in str:
        if 'a' <= c <= 'z':
            print(chr(ord(c) - 32), end="")
        else:
            print(c, end="")
    print()
