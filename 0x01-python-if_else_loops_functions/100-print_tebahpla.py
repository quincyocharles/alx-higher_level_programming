#!/usr/bin/python3
for i in range(ord('z'), ord('a') - 1, -1):
    print("{:c}".format(i), end="")
    if i != ord('a'):
        print("{:c}".format(i - 33), end="")

print()
