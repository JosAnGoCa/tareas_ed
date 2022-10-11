import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static final String SEPARADOR = ",";

    public static void main(String[] args) {
        BufferedReader bufferLectura = null;
        ArrayList<ArrayList<String>> data = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        try {
            // Abrir el .csv en buffer de lectura
            bufferLectura = new BufferedReader(new FileReader("presenciaredes.csv"));

            // Leer una linea del archivo
            bufferLectura.readLine();
            String linea = bufferLectura.readLine();

            while (linea != null) {
                // Sepapar la linea leída con el separador definido previamente
                String[] separadoPorComas = linea.split(SEPARADOR);
                ArrayList<String> campos = new ArrayList<>();

                for(int i = 0; i < separadoPorComas.length; i++) {
                    if(separadoPorComas[i].charAt(0) != '"') {
                        campos.add(separadoPorComas[i].replace("%", ""));
                    } else {
                        String strNew = separadoPorComas[i] + separadoPorComas[i+1];
                        campos.add(strNew.replace("\"", ""));
                        i++;
                    }
                }

                data.add(campos);

                linea = bufferLectura.readLine();
            }
        } catch (IOException e) {
            e.printStackTrace();
        } finally {
            // Cierro el buffer de lectura
            if (bufferLectura != null) {
                try {
                    bufferLectura.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
        }

        if(data.size() >= 1) {
            for(int i = 0; i < data.size(); i++) {
                if(data.get(i).get(0).equals("TWITTER") && data.get(i).get(1).indexOf("SEGUIDORES") >= 0){
                    System.out.println("Diferencia de followers (enero - junio) : " + (Double.parseDouble(data.get(i).get(8)) - Double.parseDouble(data.get(i).get(3))) + "\n" );
                }
            }


            // !
            String[] meses = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO"};
            int mes_1, mes_2;
            System.out.println("Indices de los meses");
            for(int i = 0; i < meses.length; i++) {
                System.out.println("  " + (i+1) + " - " + meses[i] );
            }
            System.out.println("Introduce el indice de los meses a comparar");
            System.out.print("Mes 1: ");
            mes_1 = scanner.nextInt();
            System.out.print("Mes 2: ");
            mes_2 = scanner.nextInt();


            if(mes_2 > mes_1) {
                for (int i = 0; i < data.size(); i++) {
                    if (data.get(i).get(0).equals("YOUTUBE") && data.get(i).get(1).indexOf("VISUALIZACIONES") >= 0) {
                        double vistas_mes_1 = Double.parseDouble(data.get(i).get(mes_1 + 2));
                        double vistas_mes_2 = Double.parseDouble(data.get(i).get(mes_2 + 2));
                        System.out.println("La diferencia de visualizaciones entre los dos meses (" + meses[mes_1 - 1] + " - " + meses[mes_2 - 1] + ") seleccionados es : " + (vistas_mes_2-vistas_mes_1) + "\n");
                    }
                }
            } else {
                System.out.println("El mes 2 (" + mes_2 + ") no puede ser mayor al mes 1 ("+ mes_1 +")\n");
            }

            double promedio_twitter = 0, promedio_facebook = 0;
            for (int i = 0; i < data.size(); i++) {
                if (data.get(i).get(0).equals("TWITTER") && data.get(i).get(1).indexOf("CRECIMIENTO DE FOLLOWERS") >= 0) {
                    promedio_twitter += Double.parseDouble(data.get(i).get(3));
                    promedio_twitter += Double.parseDouble(data.get(i).get(4));
                    promedio_twitter += Double.parseDouble(data.get(i).get(5));
                    promedio_twitter += Double.parseDouble(data.get(i).get(6));
                    promedio_twitter += Double.parseDouble(data.get(i).get(7));
                    promedio_twitter += Double.parseDouble(data.get(i).get(8));
                    promedio_twitter = promedio_twitter / 6;
                }
                if (data.get(i).get(0).equals("FACEBOOK") && data.get(i).get(1).indexOf("CRECIMIENTO (seguidores)") >= 0) {
                    promedio_facebook += Double.parseDouble(data.get(i).get(3));
                    promedio_facebook += Double.parseDouble(data.get(i).get(4));
                    promedio_facebook += Double.parseDouble(data.get(i).get(5));
                    promedio_facebook += Double.parseDouble(data.get(i).get(6));
                    promedio_facebook += Double.parseDouble(data.get(i).get(7));
                    promedio_facebook += Double.parseDouble(data.get(i).get(8));
                    promedio_facebook = promedio_facebook / 6;
                }
            }
            System.out.println("Promedio de crecimiento de twiiter " + promedio_twitter);
            System.out.println("Promedio de crecimeinto de facebook " + promedio_facebook);
        }
    }
}
