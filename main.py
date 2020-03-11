#!/usr/bin/env python
from tree import Tree
from stack import Stack


def main():
    data = [70, 30, 25, 80, 60, 50, 75, 10, 45]
    forest = Stack()
    for i in data:
        forest.push(i)

    print(forest)

main()

