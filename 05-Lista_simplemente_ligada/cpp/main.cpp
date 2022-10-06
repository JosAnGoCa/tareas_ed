#include "simpleLinkedList.h"

using namespace std;

int main() {
    SimpleLinkedList<int> *listaLigada = new SimpleLinkedList<int>();

    cout << boolalpha;

    cout << *listaLigada << endl;

    // Esta vacia
    cout << "\nCompureba que la lista este vacia" << endl;
    cout << listaLigada->isEmpty() << endl;

    // Tamaño
    cout << "\nTamanio" << endl;
    cout << listaLigada->getSize() << endl;

    // Agregar al inicio
    cout << "\nAgrega 12 al inicio" << endl;
    listaLigada->addFirst(12);
    cout << *listaLigada << endl;
    cout << "Agrega 32 al inicio" << endl;
    listaLigada->addFirst(32);
    cout << *listaLigada << endl;
    cout << "Agrega 61 al inicio" << endl;
    listaLigada->addFirst(61);
    cout << *listaLigada << endl;

    // Agregar al final
    cout << "\nAgrega 28 al final" << endl;
    listaLigada->addLast(28);
    cout << *listaLigada << endl;

    // Agregar despues de
    cout << "\nAgregar 55 despues de 12" << endl;
    listaLigada->addAfter(12, 55);
    cout << *listaLigada << endl;

    // Elimina en la posicion
    cout << "\nElimina en la posicion 2" << endl;
    listaLigada->deleteAt(2);
    cout << *listaLigada << endl;

    // Elimina al inicio
    cout << "\nElimina al inicio" << endl;
    listaLigada->deleteStart();
    cout << *listaLigada << endl;

    // Elimina al final
    cout << "\nElimina al final" << endl;
    listaLigada->deleteLast();
    cout << *listaLigada << endl;

    // Busca el valor
    cout << "\nBusca el 55" << endl;
    cout << "Resultado: " << listaLigada->search(55) << endl;

    // Actualiza el 61 a 10
    cout << "\nActualiza el 32 a 10" << endl;
    listaLigada->update(32, 10);
    cout << *listaLigada << endl;

    delete listaLigada;
}