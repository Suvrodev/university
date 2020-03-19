class Tree:
    class Node:
        def __init__(self, value):
            self.value = value
            self.left_child = None
            self.right_child = None

    def __init__(self):
        self.root = None

    def insert(self, value):
        def recursive(node, value):
            if node.value > value:
                if node.left_child:
                    recursive(node.left_child, value)
                else:
                    node.left_child = self.Node(value)
            else:
                if node.right_child:
                    recursive(node.right_child, value)
                else:
                    node.right_child = self.Node(value)

        if not self.root:
            self.root = self.Node(value)
        else:
            recursive(self.root, value)

    def traverse(self, order):
        def recursive_in_order(node):
            if node:
                recursive_in_order(node.left_child)
                print(" " , node.value, end="")
                recursive_in_order(node.right_child)

        def recursive_pre_order(node):
            if node:
                print(" " , node.value, end="")
                recursive_pre_order(node.left_child)
                recursive_pre_order(node.right_child)

        def recursive_post_order(node):
            if node:
                recursive_post_order(node.left_child)
                recursive_post_order(node.right_child)
                print(" " , node.value, end="")

        traverses = {"post" : recursive_post_order, "pre" : recursive_pre_order, "in" : recursive_in_order}

        print("[", end="")
        traverses[order](self.root)
        print(" ]")
