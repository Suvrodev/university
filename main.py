#!/usr/bin/env python
from tree import Tree


def main():
    data = [70, 30, 25, 80, 60, 50, 75, 10, 45]
    forest = Tree()
    for i in data:
        forest.insert(i)

    forest.traverse("in")

main()

