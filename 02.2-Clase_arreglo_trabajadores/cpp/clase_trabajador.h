#ifndef TRABAJADOR
#define TRABAJADOR

#include <iostream>

using namespace std;

class Trabajador {
    private:
        const double MONTO_H_EXTRA = 276.5;
        const double PRESTACION_ANUAL = 0.03;
        int numeroTrabajador;
        string nombre;
        string paterno;
        string materno;
        int horasExtra;
        double sueldoBase;
        int anioIngreso;

    public:
        Trabajador() = default;

        Trabajador(int numeroTrabajador, string nombre, string paterno, string materno, int horasExtra, double sueldoBase, int anioIngreso);

        int getNumeroTrabajador();

        void setNumeroTrabajador(int numeroTrabajador);

        string getNombre();

        void setNombre(string nombre);

        string getPaterno();

        void setPaterno(string paterno);

        string getMaterno();

        void setMaterno(string materno);

        int getHorasExtra();

        void setHorasExtra(int horasExtra);

        double getSueldoBase();

        void setSueldoBase(double sueldoBase);

        int getAnioIngreso();

        void setAnioIngreso(int anioIngreso);

        double calcularSueldo();

        void operator= (const Trabajador& t);

        friend std::ostream& operator<<(std::ostream& os, const Trabajador& trabajador){
            os << "#: " << trabajador.numeroTrabajador <<
                ", Nombre: " << trabajador.nombre <<
                " " << trabajador.paterno <<
                " " << trabajador.materno <<
                ", Horas extra: " << trabajador.horasExtra <<
                ", Sueldo base: " << trabajador.sueldoBase <<
                ", Anio de ingreso: " << trabajador.anioIngreso;
            return os;
        }
};

#include "clase_trabajador.cpp"

#endif