#include "clase_trabajador.h"

Trabajador::Trabajador(int numeroTrabajador, string nombre, string paterno, string materno, int horasExtra, double sueldoBase, int anioIngreso) {
    this->numeroTrabajador = numeroTrabajador;
    this->nombre = nombre;
    this->paterno = paterno;
    this->materno = materno;
    this->horasExtra = horasExtra;
    this->sueldoBase = sueldoBase;
    this->anioIngreso = anioIngreso;
};

int Trabajador::getNumeroTrabajador() {
    return numeroTrabajador;
}

void Trabajador::setNumeroTrabajador(int numeroTrabajador) {
    this->numeroTrabajador = numeroTrabajador;
}

string Trabajador::getNombre() {
    return nombre;
}

void Trabajador::setNombre(string nombre) {
    this->nombre = nombre;
}

string Trabajador::getPaterno() {
    return paterno;
}

void Trabajador::setPaterno(string paterno) {
    this->paterno = paterno;
}

string Trabajador::getMaterno() {
    return materno;
}

void Trabajador::setMaterno(string materno) {
    this->materno = materno;
}

int Trabajador::getHorasExtra() {
    return horasExtra;
}

void Trabajador::setHorasExtra(int horasExtra) {
    this->horasExtra = horasExtra;
}

double Trabajador::getSueldoBase() {
    return sueldoBase;
}

void Trabajador::setSueldoBase(double sueldoBase) {
    this->sueldoBase = sueldoBase;
}

int Trabajador::getAnioIngreso() {
    return anioIngreso;
}

void Trabajador::setAnioIngreso(int anioIngreso) {
    this->anioIngreso = anioIngreso;
}

double Trabajador::calcularSueldo() {
    double total = 0.0;
    total = sueldoBase;
    total += sueldoBase * ((2022 - anioIngreso) * PRESTACION_ANUAL);
    total += MONTO_H_EXTRA * horasExtra;
    return total;
}

void Trabajador::operator= (const Trabajador& t){
    this->numeroTrabajador = t.numeroTrabajador;
    this->nombre = t.nombre;
    this->paterno = t.paterno;
    this->materno = t.materno;
    this->horasExtra = t.horasExtra;
    this->sueldoBase = t.sueldoBase;
    this->anioIngreso = t.anioIngreso;
}