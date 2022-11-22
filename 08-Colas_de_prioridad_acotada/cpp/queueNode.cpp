#include "queueNode.h"

template <typename T>
queueNode<T>::queueNode() {
    front = nullptr;
    back = nullptr;
    length = 0;
}

template <typename T>
queueNode<T>::~queueNode() {
    delete front;
}

template <typename T>
bool queueNode<T>::isEmpty(){
    return front == nullptr && length == 0;
}

template <typename T>
int queueNode<T>::getLength() {
    return length;
}

template <typename T>
T queueNode<T>::dequeue() {
    if(isEmpty()){
        throw std::out_of_range("Queue is empty");
    }
    T value = front->getData();
    Node<T> *temp = front;
    front = front->getNext();
    temp->setNext(nullptr);
    delete temp;
    length--;
    return value;
}

template <typename T>
T queueNode<T>::frontValue() {
    if(isEmpty()){
        throw std::out_of_range("Queue is empty");
    }
    return front->getData();
}

template <typename T>
void queueNode<T>::enqueue(T value) {
    Node<T> *newNode = new Node<T>(value);
    if(isEmpty()){
        front = newNode;
        back = newNode;
    } else {
        back->setNext(newNode);
        back = newNode;
    }
    length++;
}
