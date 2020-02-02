#!/usr/bin/env python3.8
from string import String
from array import Array

def main():
    #print(String.Substring("tasty", 2, 3))
    #print(String.Insert('ABCDEFG', 3, 'XYZ'))
    #print(String.Delete('ABCDEFG', 3, 2))
    #print(String.Replace('XABYABZAB', 'AB', 'C'))
    data = list(map(int, input().split()))
    print(Array.bubble_sort(data))

main()

