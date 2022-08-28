#include "clase_arreglo.h"

template <typename T>
Arreglo<T>::Arreglo(int size) {
    this->size = size;
    this->data = new T[size];
}

template <typename T>
Arreglo<T>::~Arreglo() {
    delete[] this->data;
}

template <typename T>
T Arreglo<T>::getItem(int index) {
    if(index >= this->size || index < 0) {
        throw out_of_range("Invalid index, out of bounds");
    }
    return this->data[index];
}

template <typename T>
void Arreglo<T>::setItem(int index, T value) {
    if(index >= this->size || index < 0) {
        throw out_of_range("Invalid index, out of bounds");
    }
    data[index] = value;
}

template <typename T>
int Arreglo<T>::getLength() {
    return this->size;
}

template <typename T>
void Arreglo<T>::clear(T value) {
    for(int i = 0; i < this->size; i++) {
        this->data[i] = value;
    }
}
