class Array:
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
