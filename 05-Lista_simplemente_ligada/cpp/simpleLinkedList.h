#ifndef CLASE_SIMPLELINKEDLIST_H
#define CLASE_SIMPLELINKEDLIST_H

#include <iostream>
#include "node.h"

template <typename T>
class SimpleLinkedList {
    private:
        Node<T> *head;

    public:
        SimpleLinkedList() = default;

        ~SimpleLinkedList();

        bool isEmpty();

        int getSize();

        int search(T valor);

        void addLast(T valor);

        void addFirst(T valor);

        void addAfter(T referencia, T valor);

        void deleteAt(int index);

        void deleteStart();

        void deleteLast();

        void update(T a_buscar, T valor);

        friend std::ostream& operator<<(std::ostream& os, const SimpleLinkedList<T>& lista){
            Node<T> *iteratorNode = lista.head;
            while(iteratorNode != nullptr){
                os << *iteratorNode;
                iteratorNode = iteratorNode->getNext();
            }
            return os;
        }
};

#include "simpleLinkedList.cpp"

#endif // CLASE_SIMPLELINKEDLIST_H