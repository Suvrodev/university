#!/usr/bin/env python3.8
from string import String
from ds import Ds

def main():
    text = "XABYABZAB"
    print(String.Substring(text, 1, 1))
    print(String.Index(text, "AB"))
    #print(String.Insert('ABCDEFG', 3, 'XYZ'))
    #print(String.Delete('ABCDEFG', 3, 2))
    print(String.Replace_all('XABYABZAB', 'AB', 'C'))
    #data = list(map(int, input().split()))
    #print(Ds.bubble_sort(data))

main()

