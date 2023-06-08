#!/usr/bin/python3
if __name__ == "__main__":

    import sys

    total_result = 0
    for i in range(len(sys.argv) - 1):
        total_result += int(sys.argv[i + 1])
        print("{}".format(total_result))
