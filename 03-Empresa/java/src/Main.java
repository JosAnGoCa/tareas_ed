import java.io.IOException;

public class Main {
    public static void main(String[] args) throws IOException {
        nominaADT nomina = new nominaADT("junio.dat", "Estructura de datos S.A. de C.V.");
        nomina.calcularSueldo();
        System.out.println("-----------------------------------------------------");
        nomina.obtenerMaxMin();
    }
}
