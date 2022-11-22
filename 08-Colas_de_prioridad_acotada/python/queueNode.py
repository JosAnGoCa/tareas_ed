from node import Node

class QueueNode:
    fontElement = None
    back = None
    length = 0

    def __init__(self):
        self.length = 0
        self.fontElement = None
        self.back = None

    def isEmpty(self):
        return self.fontElement == None and self.length == 0

    def getLength(self):
        return self.length

    def enqueue(self, valor):
        newNode = Node(valor)
        if self.isEmpty():
            self.fontElement = newNode
            self.back = newNode
        else:
            self.back.setNext(newNode)
            self.back = newNode
        self.length += 1

    def dequeue(self):
        if self.isEmpty():
            return

        if self.fontElement == self.back:
            self.back = None

        temp = self.fontElement.getData()
        self.fontElement = self.fontElement.getNext()
        self.length -= 1
        return temp

    def frontValue(self):
        if self.isEmpty():
            return
        return self.fontElement.getData()

    def __str__(self):
        stackString = "";
        iteratorNode = self.frontElement;
        while iteratorNode != None :
            stackString += iteratorNode;
            iteratorNode = iteratorNode.getNext();
        return stackString;
