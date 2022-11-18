#include "stackNode.h"

template <typename T>
stackNode<T>::~stackNode() {
    delete top;
}

template <typename T>
bool stackNode<T>::isEmpty(){
    return top == nullptr;
}

template <typename T>
int stackNode<T>::getLength() {
    return length;
}

template <typename T>
T stackNode<T>::pop() {
    if(isEmpty()){
        throw std::out_of_range("Stack is empty");
    }
    T value = top->getData();
    Node<T> *temp = top;
    top = top->getNext();
    temp->setNext(nullptr);
    delete temp;
    length--;
    return value;
}

template <typename T>
T stackNode<T>::peek() {
    if(isEmpty()){
        throw std::out_of_range("Stack is empty");
    }
    return top->getData();
}

template <typename T>
void stackNode<T>::push(T value) {
    Node<T> *newNode = new Node<T>(value, top);
    top = newNode;
    length++;
}
