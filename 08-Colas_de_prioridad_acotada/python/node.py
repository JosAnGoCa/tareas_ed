class Node:
    data = None
    next = None

    def __init__(self, data = None, next=None):
        self.data = data
        self.next = next

    def getData(self):
        return self.data

    def setData(self, data):
        self.data = data

    def getNext(self):
        return self.next

    def setNext(self, next):
        self.next = next

    def __str__(self):
        return "|" + str(self.data) + "| --> "

    def __repr__(self):
        return str(self.data)
