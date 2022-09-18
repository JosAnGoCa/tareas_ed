#include "conjunto.h"

template <typename T>
int Conjunto<T>::length() {
    return data.size();
}

template <typename T>
bool Conjunto<T>::contains(T value) {
    for(int i = 0; i < length(); i++) {
        if(data[i] == value) {
            return true;
        }
    }
    return false;
}

template <typename T>
void Conjunto<T>::add(T value) {
    if(!contains(value)) {
        data.push_back(value);
    }
}

template <typename T>
void Conjunto<T>::remove(T value) {
    for(int i = 0; i < length(); i++) {
        if(data[i] == value) {
            data.erase(data.begin() + i);
            return;
        }
    }
}

template <typename T>
bool Conjunto<T>::equals(Conjunto<T> *other) {
    if(length() != other->length()) {
        return false;
    }
    for(int i = 0; i < length(); i++) {
        if(!other->contains(data[i])) {
            return false;
        }
    }
    return true;
}

template <typename T>
bool Conjunto<T>::isSubset(Conjunto<T> *other) {
    if(length() < other->length()) {
        return false;
    }
    for(int i = 0; i < other->length(); i++) {
        if(!contains(other->data[i])) {
            return false;
        }
    }
    return true;
}

template <typename T>
void Conjunto<T>::union_(Conjunto<T> *other) {
    for(int i = 0; i < other->length(); i++) {
        add(other->data[i]);
    }
}

template <typename T>
Conjunto<T> Conjunto<T>::intersection(Conjunto<T> *other) {
    Conjunto<T> result;
    for(int i = 0; i < length(); i++) {
        if(other->contains(data[i])) {
            result.add(data[i]);
        }
    }
    return result;
}

template <typename T>
Conjunto<T> Conjunto<T>::difference(Conjunto<T> *other) {
    Conjunto<T> result;
    for(int i = 0; i < length(); i++) {
        if(!other->contains(data[i])) {
            result.add(data[i]);
        }
    }
    for(int i = 0; i < other->length(); i++) {
        if(!contains(other->data[i])) {
            result.add(other->data[i]);
        }
    }
    return result;
}
