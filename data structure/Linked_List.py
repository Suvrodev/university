class Linked_List:
    class Node:
        def __init__(self, key, value):
            self._value = value
            self._key = key
            self._next = None

    def __init__(self):
        self.node_head = None

    def add_last(self, key, value):
        if not self.node_head:
            self.node_head = self.Node(key, value)
        else:
            last_var = self.node_head
            while last_var._next:
                last_var = last_var._next
            last_var._next = self.Node(key, value)

    def search(self, value):
        var = self.node_head
        while var:
            if var._key == value:
                return var
            var = var._next

    def delete(self, value):
        if self.node_head._value == value:
            self.node_head = self.node_head._next
        else:
            current = self.node_head
            previous = None
            while current:
                if current._value == value:
                    previous._next = current._next
                    return current
                previous = current
                current = current._next

    def __repr__(self):
        prnt = "["
        var = self.node_head
        while var:
            prnt += " " + var._value + ","
            var = var._next
        prnt = prnt.rstrip(",") + " ]"
        return prnt
