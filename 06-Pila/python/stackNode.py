from node import Node

class StackNode:
    top = None
    length = 0;

    def __init__(self):
        self.length = 0
        self.top = None

    def isEmpty(self):
        return self.top == None and self.length == 0

    def getLength(self):
        return self.length

    def push(self, valor):
        newNode = Node(valor, self.top)
        self.top = newNode
        self.length += 1

    def pop(self):
        if self.isEmpty():
            return
        temp = self.top
        self.top = self.top.getNext()
        self.length -= 1
        return temp.getData()

    def peek(self):
        if self.isEmpty():
            return
        return self.top.getData()

    def printStack(self):
        current = self.top
        while current != None:
            print(current.getData())
            current = current.getNext()

    def __str__(self):
        current = self.top
        cadena = ""
        while current != None:
            cadena += str(current)
            current = current.getNext()
        return cadena
