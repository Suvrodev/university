#!/usr/bin/env python
from stringg import String
from ds import Ds
from chaptertwo import ChapterTwo
from itertools import permutations, combinations
from Linked_List import Linked_List


def main():
    # print(ChapterTwo.two_point_two(13))
    # data = [70, 30, 25, 80, 60, 50, 30, 75, 25, 60]
    # print(ChapterTwo.two_point_three(data))
    # print(ChapterTwo.two_point_four(1000))
    # print(Ds.bubble_sort([5, 1, 7, 3]))
    # print(ChapterTwo.TwoPointFive().thousand_count(3))
    # print("Location is ", Ds.binary_search(data, 5))
    # x = [
    #     [3, [13, 9]],
    #     [9, 8],
    #     [7, 0],
    #     ]
    # print(x[0][1][0])
    lis = Linked_List()
    for i in range(5):
        lis.add_last(i, input())
    print(lis)
    item = lis.search(3)
    if item:
        print(item._value, " and ", item._key)
    else:
        print("Not found.")
    it = lis.delete(item._value)
    print(lis, " and \n", it._value)

main()

