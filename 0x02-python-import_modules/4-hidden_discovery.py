#!/usr/bin/python3
import hidden_4

if __name__ == "__main__":
    def print_names(file):
        for name in sorted(dir(file)):
            if not name.startswith('__'):
                print(name)
    print_names(hidden_4)
