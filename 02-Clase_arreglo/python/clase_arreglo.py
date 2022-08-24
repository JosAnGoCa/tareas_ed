class Arreglo:
    size = 0
    data = []

    def __init__(self, size):
        self.size = size
        self.data = [0 for i in range(size)]

    def getItem(self, index):
        if index >= self.size or index < 0:
            raise IndexError("Invalid index, out of bounds")
        return self.data[index]

    def setItem(self, index, value):
        if index >= self.size or index < 0:
            raise IndexError("Invalid index, out of bounds")
        self.data[index] = value

    def getLength(self):
        return self.size

    def clear(self, value):
        for i in range(self.size):
            self.data[i] = value

    def __str__(self):
        return str(self.data)

