#ifndef CLASE_ARREGLO_H
#define CLASE_ARREGLO_H

#include <iostream>

using namespace std;

template <typename T>
class Arreglo {
    private:
        T *data;
        int size;

    public:
        Arreglo(int size);

        ~Arreglo();

        T getItem(int index);

        void setItem(int index, T value);

        int getLength();

        void clear(T value);

        friend std::ostream& operator<<(std::ostream& os, const Arreglo<T>& arreglo){
            os << "[";
            for(int i = 0; i < arreglo.size-1; i++) {
                os << arreglo.data[i] << ", ";
            }
            os << arreglo.data[arreglo.size-1] << "]";
            return os;
        }
};

#include "clase_arreglo.cpp"

#endif