import java.util.HashMap;

public class HashMap_ejemplo {
    public static void main(String[] args) {
        // Crear un HashMap
        HashMap<String, Integer> map = new HashMap<>();

        // Agregar elementos al mapa
        map.put("Jane", 20);
        map.put("John", 30);
        map.put("Adam", 40);

        // Obtener el tamaño del mapa
        System.out.println("El tamaño del mapa es: " + map.size());

        // Verificar si un elemento existe en el mapa
        boolean isJohnInMap = map.containsKey("John");
        System.out.println("¿John está en el mapa? " + isJohnInMap);

        // Obtener el valor de una clave en el mapa
        int ageOfAdam = map.get("Adam");
        System.out.println("La edad de Adam es: " + ageOfAdam);

        // Recorrer los elementos del mapa usando un iterador
        for (String key : map.keySet()) {
            System.out.println(key + " tiene " + map.get(key) + " años.");
        }
    }
}
