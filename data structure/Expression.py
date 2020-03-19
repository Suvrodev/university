from stack import Stack

class Expression:
    class Postfix:
        def __init__(self):
            self.operand = Stack()

        def evaluation(self, value):
            value.append(")")
            for val in value:
                if val.isdigit():
                    self.operand.push(int(val))
                else:
                    if val == '+':
                        var1 = self.operand.pop()
                        var2 = self.operand.pop()
                        self.operand.push(var2 + var1)
                    elif val == '-':
                        var1 = self.operand.pop()
                        var2 = self.operand.pop()
                        self.operand.push(var2 - var1)
                    elif val == '*':
                        var1 = self.operand.pop()
                        var2 = self.operand.pop()
                        self.operand.push(var2 * var1)
                    elif val == '/':
                        var1 = self.operand.pop()
                        var2 = self.operand.pop()
                        self.operand.push(var2 / var1)
                    else:
                        break
            return self.operand.pop()
