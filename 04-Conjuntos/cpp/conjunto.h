#ifndef CLASE_CONJUNTO_H
#define CLASE_CONJUNTO_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Conjunto {
    private:
        vector<T> data;

    public:
        int length();

        bool contains(T value);

        void add(T value);

        void remove(T value);

        bool equals(Conjunto<T> *other);

        bool isSubset(Conjunto<T> *other);

        void union_(Conjunto<T> *other);

        Conjunto<T> intersection(Conjunto<T> *other);

        Conjunto<T> difference(Conjunto<T> *other);

        friend std::ostream& operator<<(std::ostream& os, const Conjunto<T>& conjunto){
            os << "[";
            for(int i = 0; i < (int)conjunto.data.size()-1; i++) {
                os << conjunto.data[i] << ", ";
            }
            if(conjunto.data.size() > 0) {
                os << conjunto.data[conjunto.data.size()-1];
            }
            os << "]";
            return os;
        }
};

#include "conjunto.cpp"

#endif