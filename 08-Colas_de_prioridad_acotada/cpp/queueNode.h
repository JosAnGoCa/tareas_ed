#ifndef CLASE_QUEUENODE_H
#define CLASE_QUEUENODE_H

#include <iostream>
#include "node.h"

template <typename T>
class queueNode {
    private:
        Node<T> *front;
        Node<T> *back;
        int length;

    public:
        queueNode();

        ~queueNode();

        bool isEmpty();

        int getLength();

        T dequeue();

        T frontValue();

        void enqueue(T valor);

        friend std::ostream& operator<<(std::ostream& os, const queueNode<T>& queue){
            Node<T> *iteratorNode = queue.front;
            while(iteratorNode != nullptr){
                os << *iteratorNode;
                iteratorNode = iteratorNode->getNext();
            }
            return os;
        }
};

#include "queueNode.cpp"

#endif // CLASE_QUEUENODE_H