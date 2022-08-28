#include "clase_nomina.h"

Nomina::Nomina(string rutaArchivo, string nombreCompania) {
    this->nombreCompania = nombreCompania;
    this->rutaArchivo = rutaArchivo;
    int contador = 0;
    string line, word, fileContent = "";

    fstream file(rutaArchivo, ios::in);
    if(file.is_open()) {

        getline(file, line);
        while(getline(file, line)) {
            fileContent += line + "\n";
            contador++;
        }
        file.close();

        this->empleados = new Arreglo<Trabajador>(contador);

        contador = 0;
        stringstream ss(fileContent);
        while (getline(ss, line, '\n')) {
            stringstream ss2(line);
            vector<string> datos;
            while (getline(ss2, word, ',')) {
                datos.push_back(word);
            }

            Trabajador trabajadorTemp;
            trabajadorTemp.setNumeroTrabajador(stoi(datos[0]));
            trabajadorTemp.setNombre(datos[1]);
            trabajadorTemp.setPaterno(datos[2]);
            trabajadorTemp.setMaterno(datos[3]);
            trabajadorTemp.setHorasExtra(stoi(datos[4]));
            trabajadorTemp.setSueldoBase(stod(datos[5]));
            trabajadorTemp.setAnioIngreso(stoi(datos[6]));

            this->empleados->setItem(contador, trabajadorTemp);
            contador++;
        }
    } else {
        cout<<"No se pudo abrir el archivo\n";
    }
}

Nomina::~Nomina()  {
    delete this->empleados;
}

void Nomina::calcularSueldo() {
    for(int i = 0; i < empleados->getLength(); i++){
        cout << empleados->getItem(i) << "\n";
        cout << "Sueldo total: " << empleados->getItem(i).calcularSueldo() << "\n";
    }
}

void Nomina::obtenerMaxMin(){
    Trabajador maxTrabajador = empleados->getItem(0);
    Trabajador minTrabajador = empleados->getItem(0);
    for(int i = 0; i < empleados->getLength(); i++) {
        if(empleados->getItem(i).getAnioIngreso() > maxTrabajador.getAnioIngreso()) {
            maxTrabajador = empleados->getItem(i);
        }
        if(empleados->getItem(i).getAnioIngreso() < minTrabajador.getAnioIngreso()) {
            minTrabajador = empleados->getItem(i);
        }
    }

    cout << "Trabajadores con mayor y menor antiguedad en : " << nombreCompania << "\n";
    cout << "Primer trabajador encontrado con la menor(-) antiguedad: " << "\n";
    cout << minTrabajador << "\n";
    cout << "Primer trabajador encontrado con la mayor(+) antiguedad: " << "\n";
    cout << maxTrabajador << "\n";
}