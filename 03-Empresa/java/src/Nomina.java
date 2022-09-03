import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

import static java.lang.Integer.parseInt;

public class Nomina {
    private String nombreCompania;
    private Arreglo<Trabajador> empleados;
    private String rutaArchivo;
    public static String SEPARADOR_SALTO_DE_LINEA = "\n";
    public static String SEPARADOR_COMA = ",";

    public Nomina(String rutaArchivo, String nombreCompania) throws IOException {
        this.nombreCompania = nombreCompania;
        this.rutaArchivo = rutaArchivo;
        int contador = 0;
        String line, fileContent = "";
        BufferedReader bufferLectura = new BufferedReader(new FileReader(this.rutaArchivo));

        bufferLectura.readLine();
        while((line = bufferLectura.readLine()) != null) {
            fileContent += line + "\n";
            contador++;
        }
        bufferLectura.close();

        String[] separadoPorSaltosDeLinea = fileContent.split(SEPARADOR_SALTO_DE_LINEA);

        empleados = new Arreglo<>(contador);

        for(int i = 0; i < separadoPorSaltosDeLinea.length; i++) {
            String[] lineaSeparadaPorComas = separadoPorSaltosDeLinea[i].split(SEPARADOR_COMA);
            Trabajador trabajadorTemp = new Trabajador();
            trabajadorTemp.setNumeroTrabajador(parseInt(lineaSeparadaPorComas[0]));
            trabajadorTemp.setNombre(lineaSeparadaPorComas[1]);
            trabajadorTemp.setPaterno(lineaSeparadaPorComas[2]);
            trabajadorTemp.setMaterno(lineaSeparadaPorComas[3]);
            trabajadorTemp.setHorasExtra(parseInt(lineaSeparadaPorComas[4]));
            trabajadorTemp.setSueldoBase(parseInt(lineaSeparadaPorComas[5]));
            trabajadorTemp.setAnioIngreso(parseInt(lineaSeparadaPorComas[6]));
            empleados.setItem(i, trabajadorTemp);
        }
    }

    public void calcularSueldo() {
        for(int i = 0; i < empleados.getLength(); i++){
            System.out.println(empleados.getItem(i));
            System.out.println("Sueldo total: " + empleados.getItem(i).calcularSueldo());
        }
    }

    public void obtenerMaxMin() {
        Trabajador maxTrabajador = empleados.getItem(0);
        Trabajador minTrabajador = empleados.getItem(0);
        for(Trabajador currTrabajador : empleados) {
            if(currTrabajador.getAnioIngreso() > maxTrabajador.getAnioIngreso()) {
                maxTrabajador = currTrabajador;
            }
            if(currTrabajador.getAnioIngreso() < minTrabajador.getAnioIngreso()) {
                minTrabajador = currTrabajador;
            }
        }

        System.out.println("Trabajadores con mayor y menor antiguedad en : " + nombreCompania);
        System.out.println("Primer trabajador encontrado con la menor(-) antiguedad: ");
        System.out.println(minTrabajador);
        System.out.println("Primer trabajador encontrado con la mayor(+) antiguedad: ");
        System.out.println(maxTrabajador);
    }
}
