#!/usr/bin/env python
from tree import Tree
from stack import Stack
from Expression import Expression


def main():
    # data = [70, 30, 25, 80, 60, 50, 75, 10, 45]
    # forest = Stack()
    # for i in data:
    #     forest.push(i)

    # print(forest)
    post_exp = Expression().Postfix()
    print(post_exp.evaluation(['5', '6', '2', '+', '*', '12', '4', '/', '-']))

main()

