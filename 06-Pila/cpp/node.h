#ifndef CLASE_NODO_H
#define CLASE_NODO_H

#include <iostream>

template <typename T>
class Node {
    private:
        T data;
        Node<T> *next;

    public:
        Node();

        Node(T data);

        Node(T data, Node<T> *next);

        ~Node();

        T getData();

        void setData(T data);

        Node<T>* getNext();

        void setNext(Node<T> *next);

        friend std::ostream& operator<<(std::ostream& os, const Node<T>& node){
            os << "|" << node.data << "| --> ";
            return os;
        }
};

#include "node.cpp"

#endif // CLASE_NODO_H
