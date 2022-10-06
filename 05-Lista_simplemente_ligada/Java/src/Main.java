public class Main {
    public static void main(String[] args) {
        SimpleLinkedList<Integer> listaLigada = new SimpleLinkedList<>();
        System.out.println(listaLigada);

        // Esta vacia
        System.out.println("\nCompureba que la lista este vacia");
        System.out.println(listaLigada.isEmpty());

        // Tamaño
        System.out.println("\nTamaño");
        System.out.println(listaLigada.getSize());

        // Agregar al inicio
        System.out.println("\nAgrega 12 al inicio");
        listaLigada.addFirst(12);
        System.out.println(listaLigada);
        System.out.println("Agrega 32 al inicio");
        listaLigada.addFirst(32);
        System.out.println(listaLigada);
        System.out.println("Agrega 61 al inicio");
        listaLigada.addFirst(61);
        System.out.println(listaLigada);

        // Agregar al final
        System.out.println("\nAgrega 28 al final");
        listaLigada.addLast(28);
        System.out.println(listaLigada);

        // Agregar despues de
        System.out.println("\nAgregar 55 despues de 12");
        listaLigada.addAfter(12, 55);
        System.out.println(listaLigada);

        // Elimina en la posicion
        System.out.println("\nElimina en la posicion 2");
        listaLigada.deleteAt(2);
        System.out.println(listaLigada);

        // Elimina al inicio
        System.out.println("\nElimina al inicio");
        listaLigada.deleteStart();
        System.out.println(listaLigada);

        // Elimina al final
        System.out.println("\nElimina al final");
        listaLigada.deleteLast();
        System.out.println(listaLigada);

        // Busca el valor
        System.out.println("\nBusca el 55");
        System.out.println("Resultado: " + listaLigada.search(55));

        // Actualiza el 61 a 10
        System.out.println("\nActualiza el 32 a 10");
        listaLigada.update(32, 10);
        System.out.println(listaLigada);
    }
}
