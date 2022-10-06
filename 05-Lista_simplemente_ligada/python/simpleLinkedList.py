from matplotlib.ticker import NullFormatter
from requests import head
from node import Node

class SimpleLinkedList:
    head = None

    def __init__(self):
        head = None

    def isEmpty(self):
        return self.head == None

    def getSize(self):
        current = self.head
        count = 0

        while current != None:
            count += 1
            current = current.getNext()
        return count

    def search(self, valor):
        indexPosition = 0
        current = self.head
        while current != None:
            if current.getData() == valor:
                return indexPosition
            current = current.getNext()
            indexPosition += 1
        return -1


    def addLast(self, valor):
        if self.isEmpty():
            self.head = Node(valor)
            return

        current = self.head
        while current.getNext() != None:
            current = current.getNext()
        temp = Node(valor)
        current.setNext(temp)

    def addFirst(self, valor):
        newNode = Node(valor, self.head)
        self.head = newNode

    def addAfter(self, referencia, valor):
        if(self.search(referencia) < 0):
            return

        current = self.head
        while current != None and current.getData() != referencia:
            current = current.getNext()
        newNode = Node(valor, current.getNext())
        current.setNext(newNode)

    def deleteAt(self, index):
        if index < 0 or index >= self.getSize() or self.isEmpty():
            return
        if index == 0:
            self.deleteStart()
            return

        indexPosition = 0
        prevNode = None
        current = self.head
        while current != None and indexPosition != index:
            prevNode = current
            current = current.getNext()
            indexPosition += 1
        prevNode.setNext(current.getNext())

    def deleteStart(self):
        if self.isEmpty():
            return
        self.head = self.head.getNext()

    def deleteLast(self):
        if self.isEmpty():
            return
        if self.getSize() == 1:
            self.deleteStart()
            return

        prev = None
        current = self.head
        while current.getNext() != None:
            prev = current
            current = current.getNext()
        prev.setNext(None)

    def update(self, a_buscar, valor):
        if self.search(a_buscar) < 0:
            return

        current = self.head
        while current != None and current.getData() != a_buscar:
            current = current.getNext()
        current.setData(valor)

    def __str__(self):
        current = self.head
        cadena = ""
        while current != None:
            cadena += str(current)
            current = current.getNext()
        return cadena
