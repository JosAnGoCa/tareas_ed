public class Main {
    public static void main(String[] args) {
        HashTable<String, String> hashTable = new HashTable<>(4);
        hashTable.add("Hola", "Hello");
        hashTable.add("Adios", "Goodbye");
        hashTable.add("Perro", "Dog");
        hashTable.add("Casa", "House");

        System.out.println(hashTable.valueOf("Hola"));
        System.out.println(hashTable.valueOf("Adios"));
        System.out.println(hashTable.valueOf("Perro"));

        hashTable.remove("Perro");
        System.out.println(hashTable.valueOf("Perro"));

        hashTable.add("Perro", "Dog");
        System.out.println(hashTable.valueOf("Perro"));
    }
}
