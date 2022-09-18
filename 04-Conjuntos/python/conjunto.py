class Conjunto:
    data = set()

    def __init__(self):
        self.data = set()

    def length(self):
        return len(self.data)

    def contains(self, value):
        return value in self.data

    def add(self, value):
        self.data.add(value)

    def remove(self, value):
        self.data.remove(value)

    def equals(self, other):
        if self.length() != other.length():
            return False

        for i in range(self.length()):
            if not other.contains(self.data[i]):
                return False

        return True

    def isSubset(self, other):
        return (self.data.issubset(other.data))

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

    def __iter__(self):
        return iterConjunto(self)


class iterConjunto:
    def __init__(self, conjunto):
        self._conjunto = conjunto
        self._index = 0

    def __next__(self):
        if self._index < self._conjunto.length():
            self._index += 1
            return self._conjunto.data[self._index - 1]
        raise StopIteration
