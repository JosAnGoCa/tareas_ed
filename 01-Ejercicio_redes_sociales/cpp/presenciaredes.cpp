#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include <vector>
#include <sstream>

using namespace std;

class fila {
    public:
        string redSocial, concepto;
        int anio;
        double enero, febrero, marzo, abril, mayo, junio, julio, agosto, septiembre, octubre, noviembre, diciembre;

        fila() = default;

        fila(vector<string> datos) {
            remove(datos[2].begin(), datos[2].end(), '"');
            datos[3].erase(remove(datos[3].begin(), datos[3].end(), '"'), datos[3].end());
            datos[4].erase(remove(datos[4].begin(), datos[4].end(), '"'), datos[4].end());
            datos[5].erase(remove(datos[5].begin(), datos[5].end(), '"'), datos[5].end());
            datos[6].erase(remove(datos[6].begin(), datos[6].end(), '"'), datos[6].end());
            datos[7].erase(remove(datos[7].begin(), datos[7].end(), '"'), datos[7].end());
            datos[8].erase(remove(datos[8].begin(), datos[8].end(), '"'), datos[8].end());
            datos[9].erase(remove(datos[9].begin(), datos[9].end(), '"'), datos[9].end());
            datos[10].erase(remove(datos[10].begin(), datos[10].end(), '"'), datos[10].end());
            datos[11].erase(remove(datos[11].begin(), datos[11].end(), '"'), datos[11].end());
            datos[12].erase(remove(datos[12].begin(), datos[12].end(), '"'), datos[12].end());
            datos[13].erase(remove(datos[13].begin(), datos[13].end(), '"'), datos[13].end());
            datos[14].erase(remove(datos[14].begin(), datos[14].end(), '"'), datos[14].end());

            redSocial = datos[0];
            concepto = datos[1];
            anio = stoi(datos[2]);
            enero = stod(datos[3]);
            febrero = stod(datos[4]);
            marzo = stod(datos[5]);
            abril = stod(datos[6]);
            mayo = stod(datos[7]);
            junio = stod(datos[8]);
            julio = stod(datos[9]);
            agosto = stod(datos[10]);
            septiembre = stod(datos[11]);
            octubre = stod(datos[12]);
            noviembre = stod(datos[13]);
            diciembre = stod(datos[14]);
        }
};

int main(){
    vector<fila> content;
    vector<string> row;
    string line, word, extraWord;
    string indice_meses[] = {"ENERO", "FEBRERO", "MARZO", "ABRIL", "MAYO", "JUNIO"};

    fstream file ("presenciaredes.csv", ios::in);
    if(file.is_open()) {
        getline(file, line);
        while(getline(file, line)) {
            row.clear();

            stringstream str(line);

            while(getline(str, word, ',')) {
                if (word[0] == '"') {
                    getline(str, extraWord, ',');
                    word.append(extraWord);
                }
                row.push_back(word);
            }

            content.push_back(row);
        }

        file.close();
    } else {
        cout<<"Could not open the file\n";
    }

    for(int i = 0; i < content.size(); i++) {
        if(content[i].redSocial == "TWITTER" && content[i].concepto.find("SEGUIDORES") != std::string::npos) {
            cout << "Diferencia de followers (enero - junio) : " << (content[i].junio - content[i].enero) << '\n';
        }
    }

    cout << '\n';

    int mes1, mes2;
    cout << "Indice de los meses:" << '\n';
    for(size_t i = 0; i < size(indice_meses); i++) {
        cout << "  " << i+1 << " - " << indice_meses[i] << '\n';
    }

    cout << "Introduce el indice de los meses que quieres comparar las visualizaciones de youtube:" << '\n';
    cout << "Mes 1: ";
    cin >> mes1;
    mes1--;
    cout << "Mes 2: ";
    cin >> mes2;
    mes2--;

    if (mes1 > mes2) {
        cout << "El mes 1 no puede ser mayor que el mes 2" << '\n';
    } else {
        for(int i = 0; i < content.size(); i++) {
            if(content[i].redSocial == "YOUTUBE" && content[i].concepto.find("VISUALIZACIONES") != std::string::npos) {
                int vistas_mes_1, vistas_mes_2, diferencia_vistas;
                string nombre_mes_1 = indice_meses[mes1], nombre_mes_2 = indice_meses[mes2];
                switch (mes1) {
                    case 1:
                        vistas_mes_1 = content[i].enero;
                        break;
                    case 2:
                        vistas_mes_1 = content[i].febrero;
                        break;
                    case 3:
                        vistas_mes_1 = content[i].marzo;
                        break;
                    case 4:
                        vistas_mes_1 = content[i].abril;
                        break;
                    case 5:
                        vistas_mes_1 = content[i].mayo;
                        break;
                    case 6:
                        vistas_mes_1 = content[i].junio;
                        break;
                    default:
                        vistas_mes_1 = content[i].enero;
                        break;
                }
                switch (mes2) {
                    case 1:
                        vistas_mes_2 = content[i].enero;
                        break;
                    case 2:
                        vistas_mes_2 = content[i].febrero;
                        break;
                    case 3:
                        vistas_mes_2 = content[i].marzo;
                        break;
                    case 4:
                        vistas_mes_2 = content[i].abril;
                        break;
                    case 5:
                        vistas_mes_2 = content[i].mayo;
                        break;
                    case 6:
                        vistas_mes_2 = content[i].junio;
                        break;
                    default:
                        vistas_mes_2 = content[i].enero;
                        break;
                }

                diferencia_vistas = vistas_mes_2 - vistas_mes_1;
                cout << "La diferencia de visualizaciones de youtube entre los meses " << nombre_mes_1 << " (" << vistas_mes_1 << ") y " << nombre_mes_2 << " (" << vistas_mes_2 << ") es: " << diferencia_vistas << '\n';
            }
        }
    }

    cout << '\n';

    int promedio_twitter = 0, promedio_facebook;

    for(int i = 0; i < content.size(); i++) {
        if(content[i].redSocial == "TWITTER" && content[i].concepto.find("CRECIMIENTO DE FOLLOWERS") != std::string::npos) {
            promedio_twitter = content[i].enero + content[i].febrero + content[i].marzo + content[i].abril + content[i].mayo + content[i].junio;
            cout << "suma twitter: " << promedio_twitter << '\n';
            promedio_twitter = int(promedio_twitter / 6);
        }
        if(content[i].redSocial == "FACEBOOK" && content[i].concepto.find("CRECIMIENTO (seguidores)") != std::string::npos) {
            promedio_facebook = content[i].enero + content[i].febrero + content[i].marzo + content[i].abril + content[i].mayo + content[i].junio;
            cout << "suma facebook: " << promedio_facebook << '\n';
            promedio_facebook = int(promedio_facebook / 6);
        }
    }

    cout << "Promedio de crecimiento de los seguidores (enero - junio) de twitter: " << promedio_twitter << '\n';
    cout << "Promedio de crecimiento de los seguidores (enero - junio) de facebook: " << promedio_facebook << '\n';

}
