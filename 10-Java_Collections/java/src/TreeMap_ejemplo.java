import java.util.TreeMap;

public class TreeMap_ejemplo {
    public static void main(String[] args) {
        // Crear una instancia de TreeMap
        TreeMap<String, Integer> tm = new TreeMap<>();

        // Agregar elementos a la TreeMap
        tm.put("uno", 1);
        tm.put("dos", 2);
        tm.put("tres", 3);
        tm.put("cuatro", 4);
        tm.put("cinco", 5);

        // Obtener el tamaño de la TreeMap
        System.out.println("El tamaño de la TreeMap es: " + tm.size());

        // Recorrer la TreeMap y mostrar sus elementos
        for (String key : tm.keySet()) {
            System.out.println("Clave: " + key + ", Valor: " + tm.get(key));
        }

        // Buscar un elemento en la TreeMap
        int valor = tm.get("tres");
        System.out.println("El valor de la clave 'tres' es: " + valor);

        // Eliminar un elemento de la TreeMap
        tm.remove("cuatro");
        System.out.println("El tamaño de la TreeMap después de eliminar un elemento es: " + tm.size());
    }
}
