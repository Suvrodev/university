from math import sqrt
from random import randint


class ChapterTwo:
    @classmethod
    def quadratic_equation(cls, a, b, c):
        d = b ** 2 - (4 * a * c)
        if d > 0:
            return [(-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a)]
        elif d == 0:
            return -b / (2 * a)
        else:
            return "No real solutions"

    @classmethod
    def two_point_one(cls, j, k):
        if k % j == 0:
            return 1
        else:
            return 0

    @classmethod
    def two_point_two(cls, n):
        flag1 = False
        flag2 = False
        if cls.two_point_one(2, n) == 0:
            flag1 = True
        for i in range(3, int(sqrt(n)) + 1):
            if cls.two_point_one(2, i) == 0:
                if cls.two_point_one(i, n) == 0:
                    flag2 = True
                else:
                    flag2 = False
        if flag1 and flag2:
            return f"{n} is a prime number."
        else:
            return f"{n} is not a prime number."

    @classmethod
    def two_point_three(cls, data):
        first, second = data[0], data[1]
        location1, location2 = 0, 1
        if first < second:
            temp = second
            second = first
            first = second
            location1, location2 = 1, 0
        for i in range(2, len(data)):
            if first < data[i]:
                second = first
                first = data[i]
                location1, location2 = i, location1
            elif second < data[i]:
                second = data[i]
                location2 = i
        return location1, location2

    @classmethod
    def two_point_four(cls, number):
        # sieve method
        data = [n for n in range(2, number + 1)]
        end = int(sqrt(number))

        def crossout(data, num):
            for n in data:
                if n != num and n % num == 0:
                    data.remove(n)
            return data

        for num in data:
            if num >= end:
                break
            data = crossout(data, num)
        return data

    class TwoPointFive:
        def __init__(self):
            self.note = "Should have made all methods static"

        def __count(self, data, size):
            location = 0
            biggest_number = data[0]
            number_executed = 0
            for i in range(size):
                if biggest_number < data[i]:
                    location = i
                    biggest_number = data[i]
                    number_executed += 1
            return number_executed

        def __rand_count(self, size):
            data = [randint(0, 1) for i in range(size)]
            return self.__count(data, size)

        def thousand_count(self, size):
            total = 0
            for i in range(1000):
                total += self.__rand_count(size)
            return total / 1000
