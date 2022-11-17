class StackArray:
    size = 0
    data = []
    top = -1

    def __init__(self, size):
        self.size = size
        self.data = [0 for i in range(size)]

    def isEmpty(self):
        return self.top == -1

    def getLength(self):
        return self.top +1

    def pop(self):
        if self.isEmpty():
            return None
        temp = self.data[self.top]
        self.top -= 1
        return temp

    def peek(self):
        if self.isEmpty():
            return None
        return self.data[self.top]

    def push(self, valor):
        if self.isFull():
            return
        self.top += 1
        self.data[self.top] = valor

    def isFull(self):
        return self.top == self.size -1

    def __str__(self):
        # String stackString = "";
        # for (int i = 0; i <= top; i++) {
        #     stackString += stack[i] + " -> ";
        # }
        # return stackString;
        stackString = ""
        for i in range(self.top +1, 0, -1):
            stackString += str(self.data[i -1]) + " -> "
        return stackString
