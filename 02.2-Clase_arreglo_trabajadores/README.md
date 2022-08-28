# 02-CLASE ARREGLO

### **COMPAÑERO:** Si visitas este repositorio para usarlo de guía o solo para ver la forma en la que hice la tarea te agradecería que me sigas aqui en GitHub y le dieras una estrella a este repositorio.

## Instrucciones

Crear una clase llamada **Arreglo** que tenga los siguientes métodos:

-   **Arreglo(int tamanio)**: constructor.
-   **int getLongitud()**: retorna el tamaño.
-   **setElemento(indice, valor)**: establece un elemento en una posición específica.
-   **getElemento(indice)**: regresa el elemento en el índice solicitado.
-   **limpiar(valor)**: establece todos los elementos al valor enviado.
-   **toString()**: regresa en String el estado actual del objeto.

Ejercicio:

-   El archivo junio.dat contiene los datos de los trabajadores de una empresa.
-   La estructura es: número de trabajador, nombres, paterno, materno, horas extra, sueldo base, año de ingreso.
-   Crear un ADT a partir del ADT Array que almacene la información de dicho archivo.
-   Calcular el sueldo para cada uno de ellos tomando en cuenta las siguientes reglas de negocio:
    -   La hora extra es pagada a $276.5.
    -   Por contrato colectivo de trabajo cada trabajador tiene una prestación del 3% por cada año de antigüedad.
-   Desplegar en pantalla el trabajador con mayor antigüedad y el de menor antigüedad.

## Codigo

-   [Codigo en Java](./java/src/)
    -   [Main](./java/src/Main.java)
    -   [Arreglo](./java/src/Arreglo.java)
    -   [Trabajador](./java/src/Trabajador.java)
    -   [Nomina](./java/src/nominaADT.java)
-   [Codigo en C++](./cpp/)
    -   [Main](./cpp/main.cpp)
    -   [Header Arreglo](./cpp/clase_arreglo.h)
    -   [Codigo Arreglo](./cpp/clase_arreglo.cpp)
    -   [Header Trabajador](./cpp/clase_trabajador.h)
    -   [Codigo Trabajador](./cpp/clase_trabajador.cpp)
    -   [Header Nomina](./cpp/clase_nomina.h)
    -   [Codigo Nomina](./cpp/clase_nomina.cpp)
-   [Codigo en Python](./python/)
    -   [Main](./python/main.py)
    -   [Arreglo](./python/clase_arreglo.py)
    -   [Trabajador](./python/clase_trabajador.py)
    -   [Nomina](./python/clase_nomina.py)

\- JosAnGoCa