from math import floor


class Ds:
    @classmethod
    def bubble_sort(cls, array):
        length = len(array)
        for i in range(length):
            for j in range(length - 1):
                if array[j + 1] < array[j]:
                    temp = array[j]
                    array[j] = array[j + 1]
                    array[j + 1] = temp
            length -= 1
        return array

    @classmethod
    def linear_search(cls, array, item):
        for i in range(len(array)):
            if array[i] == item:
                return i
        return -1

    @classmethod
    def binary_search(cls, array, item):
        data = cls.bubble_sort(array)
        start_point = 0
        end_point = len(array) - 1
        pivot_point = floor((start_point + end_point) / 2)
        while start_point <= end_point:
            if array[pivot_point] == item:
                return pivot_point
            elif array[pivot_point] < item:
                start_point = pivot_point + 1
            elif array[pivot_point] > item:
                end_point = pivot_point - 1
            pivot_point = floor((start_point + end_point) / 2)
        return -1
