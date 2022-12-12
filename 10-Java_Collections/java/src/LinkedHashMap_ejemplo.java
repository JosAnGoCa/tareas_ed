import java.util.LinkedHashMap;
import java.util.Map;

public class LinkedHashMap_ejemplo {
    public static void main(String[] args) {
        // Creamos una LinkedHashMap vacía
        Map<String, Integer> edades = new LinkedHashMap<>();

        // Añadimos algunos elementos a la LinkedHashMap
        edades.put("Juan", 30);
        edades.put("Ana", 25);
        edades.put("Pedro", 35);

        // Recorremos la LinkedHashMap y mostramos sus elementos
        for (Map.Entry<String, Integer> entrada : edades.entrySet()) {
            System.out.println(entrada.getKey() + " tiene " + entrada.getValue() + " años.");
        }
    }
}

