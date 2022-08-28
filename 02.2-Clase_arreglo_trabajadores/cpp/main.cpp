#include "clase_arreglo.h"
#include "clase_trabajador.h"
#include "clase_nomina.h"

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    Nomina nomina("junio.dat", "Estructura de datos S.A. de C.V.");
    nomina.calcularSueldo();
    cout << "-----------------------------------------------------" << "\n";
    nomina.obtenerMaxMin();
    return 0;
}