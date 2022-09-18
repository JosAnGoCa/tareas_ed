from conjunto import Conjunto

conjunto_1 = Conjunto()
conjunto_2 = Conjunto()

# Add method
conjunto_1.add(0);
conjunto_1.add(1);
conjunto_1.add(2);
conjunto_1.add(3);
conjunto_1.add(4);
conjunto_2.add(3);
conjunto_2.add(4);
conjunto_2.add(5);
conjunto_2.add(6);
conjunto_2.add(7);

# Length method
print("c1 length " + str(conjunto_1.lenght()))
print("c2 length " + str(conjunto_2.lenght()))

# Contains method
print("c1 contains 0 " + str(conjunto_1.contains(0)))
print("c1 contains 5 " + str(conjunto_1.contains(5)))

# Remove method
conjunto_1.remove(0);

# Equals method
print("c1 == c2 " + str(conjunto_1.equals(conjunto_2)))

# IsSubset method
print("c2 subset c1 " + str(conjunto_1.isSubset(conjunto_2)))

# Intersection method
conjunto_intersection = conjunto_1.intersection(conjunto_2)
print("intersection c1 c2 " + str(conjunto_intersection))

# Difference method
conjunto_difference = conjunto_1.difference(conjunto_2)
print("difference c1 c2 " + str(conjunto_difference))

# Union method
conjunto_1.union(conjunto_2)
print("c1 u c2 " + str(conjunto_1))

print("Done")