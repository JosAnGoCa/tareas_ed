#include "node.h"

template <typename T>
Node<T>::Node() {
    next = nullptr;
}

template <typename T>
Node<T>::Node(T data) {
    this->data = data;
    next = nullptr;
}

template <typename T>
Node<T>::Node(T data, Node<T> *next) {
    this->data = data;
    this->next = next;
}

template <typename T>
Node<T>::~Node() {
    delete next;
}

template <typename T>
T Node<T>::getData() {
    return data;
}

template <typename T>
void Node<T>::setData(T data) {
    this->data = data;
}

template <typename T>
Node<T>* Node<T>::getNext() {
    return next;
}

template <typename T>
void Node<T>::setNext(Node<T> *next) {
    this->next = next;
}