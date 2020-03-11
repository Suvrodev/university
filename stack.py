class Stack:
    class Node:
        def __init__(self, value):
            self.value = value
            self.next = None

    def __init__(self):
        self.top = None

    def __iter__(self):
        self.start = self.top
        return self

    def __next__(self):
        if self.start.next:
            self.start = self.start.next
            return self.start
        else:
            raise StopIteration

    def push(self, value):
        if not self.top:
            self.top = self.Node(value)
        else:
            new_data = self.Node(value)
            new_data.next = self.top
            self.top = new_data

    def pop(self):
        deleted_data = self.top
        self.top = self.top.next
        return deleted_data.value

    def peek(self):
        return self.top

    def __repr__(self):
        var = "["
        for i in self:
            var += " " + str(i.value)
        var += " ]"
        return var
