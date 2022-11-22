class QueueArray:
    length = 0
    data = []
    frontIndex = -1
    tailIndex = -1

    def __init__(self, size):
        self.length = size
        self.data = [0 for i in range(size)]
        frontIndex = -1
        tailIndex = -1

    def isEmpty(self):
        return self.frontIndex == -1

    def getLength(self):
        return self.length

    def dequeue(self):
        element = None;
        if not self.isEmpty(): 
            element = self.data[self.front]
            if self.front == self.tailIndex:
                self.front = -1
                self.tailIndex = -1
            else:
                front = self.move(front);
        return element;

    def frontValue(self):
        if self.isEmpty():
            return None
        return self.data[self.frontIndex]

    def enqueue(self, valor):
        if self.isFull():
            self.tailIndex = self.move(self.tailIndex)
            if self.isEmpty():
                self.frontIndex += 1
            self.data[self.tailIndex] = valor
        self.length += 1

    def isFull(self):
        return self.move(self.tailIndex) == self.frontIndex

    def move(self, index):
        return (index +1) % self.length

    def __str__(self):
        result = ""
        if not self.isEmpty():
            aux = self.frontIndex
            while True :
                result += self.data[aux] + " ";
                aux = self.move(aux);
                if aux != self.move(self.tailIndex):
                    break;
        else:
            result += "null"
        return result;
