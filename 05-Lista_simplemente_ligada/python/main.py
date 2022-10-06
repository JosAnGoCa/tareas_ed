from simpleLinkedList import SimpleLinkedList


listaLigada = SimpleLinkedList();
print(listaLigada);

# Esta vacia
print("\nCompureba que la lista este vacia");
print(listaLigada.isEmpty());

# Tamaño
print("\nTamaño");
print(listaLigada.getSize());

# Agregar al inicio
print("\nAgrega 12 al inicio");
listaLigada.addFirst(12);
print(listaLigada);
print("Agrega 32 al inicio");
listaLigada.addFirst(32);
print(listaLigada);
print("Agrega 61 al inicio");
listaLigada.addFirst(61);
print(listaLigada);

# Agregar al final
print("\nAgrega 28 al final");
listaLigada.addLast(28);
print(listaLigada);

# Agregar despues de
print("\nAgregar 55 despues de 12");
listaLigada.addAfter(12, 55);
print(listaLigada);

# Elimina en la posicion
print("\nElimina en la posicion 2");
listaLigada.deleteAt(2);
print(listaLigada);

# Elimina al inicio
print("\nElimina al inicio");
listaLigada.deleteStart();
print(listaLigada);

# Elimina al final
print("\nElimina al final");
listaLigada.deleteLast();
print(listaLigada);

# Busca el valor
print("\nBusca el 55");
print("Resultado: " + str(listaLigada.search(55)));

# Actualiza el 61 a 10
print("\nActualiza el 32 a 10");
listaLigada.update(32, 10);
print(listaLigada);
