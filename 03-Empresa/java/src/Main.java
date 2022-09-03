import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        Nomina nomina = new Nomina("junio.dat", "Estructura de datos S.A. de C.V.");
        nomina.calcularSueldo();
        System.out.println("-----------------------------------------------------");
        nomina.obtenerMaxMin();
    }
}
