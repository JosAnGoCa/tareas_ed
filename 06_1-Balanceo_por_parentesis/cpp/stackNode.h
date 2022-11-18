#ifndef CLASE_STACKNODE_H
#define CLASE_STACKNODE_H

#include <iostream>
#include "node.h"

template <typename T>
class stackNode {
    private:
        Node<T> *top;
        int length;

    public:
        stackNode() = default;

        ~stackNode();

        bool isEmpty();

        int getLength();

        T pop();

        T peek();

        void push(T valor);

        friend std::ostream& operator<<(std::ostream& os, const stackNode<T>& stack){
            Node<T> *iteratorNode = stack.top;
            while(iteratorNode != nullptr){
                os << *iteratorNode;
                iteratorNode = iteratorNode->getNext();
            }
            return os;
        }
};

#include "stackNode.cpp"

#endif // CLASE_STACKNODE_H