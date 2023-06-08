#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    
    arg_count = len(sys.argv) - 1
    if arg_count == 0:
        print("No arguments.")
    elif arg_count == 1:
        print("1 argument:")
    else:
        print("{} arguments:".format(arg_count))
        for i, arg in enumerate(sys.argv[1:], start=1):
            print("{}: {}".format(i, arg))
