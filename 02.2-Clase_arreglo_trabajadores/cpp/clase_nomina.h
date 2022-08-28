#ifndef NOMINA
#define NOMINA

#include "clase_arreglo.h"
#include "clase_trabajador.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

class Nomina {
    private :
        const string SEPARADOR_SALTO_DE_LINEA = "\n";
        const string SEPARADOR_COMA = ",";
        Arreglo<Trabajador> *empleados{};
        string nombreCompania;
        string rutaArchivo;

    public:
        Nomina() = default;

        Nomina(string rutaArchivo, string nombreCompania);

        ~Nomina();

        void calcularSueldo();

        void obtenerMaxMin();
};

#include "clase_nomina.cpp"

#endif