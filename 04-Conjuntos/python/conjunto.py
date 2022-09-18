class Conjunto:
    data = set()

    def __init__(self):
        self.data = set()

    def lenght(self):
        return len(self.data)

    def contains(self, value):
        return value in self.data

    def add(self, value):
        self.data.add(value)

    def remove(self, value):
        self.data.remove(value)

    def equals(self, other):
        if self.lenght() != other.lenght():
            return False

        for i in range(self.lenght()):
            if not other.contains(self.data[i]):
                return False

        return True

    def isSubset(self, other):
        return (other.data.issubset(self.data))

    def union(self, other):
        self.data = self.data.union(other.data)

    def intersection(self, other):
        return (self.data).intersection(other.data)

    def difference(self, other):
        difference1 = self.data.difference(other.data)
        difference2 = other.data.difference(self.data)
        return difference1.union(difference2)

    def __str__(self):
        return str(self.data)
