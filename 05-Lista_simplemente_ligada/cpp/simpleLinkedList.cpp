#include "SimpleLinkedList.h"

template <typename T>
SimpleLinkedList<T>::~SimpleLinkedList() {
    delete head;
}

template <typename T>
bool SimpleLinkedList<T>::isEmpty(){
    return head == nullptr;
}

template <typename T>
int SimpleLinkedList<T>::getSize(){
    int size = 0;
    Node<T> *iteratorNode = head;
    while(iteratorNode != nullptr){
        size++;
        iteratorNode = iteratorNode->getNext();
    }
    return size;
}

template <typename T>
int SimpleLinkedList<T>::search(T valor){
    int index = 0;
    Node<T> *iteratorNode = head;
    while(iteratorNode != nullptr){
        if(iteratorNode->getData() == valor){
            return index;
        }
        index++;
        iteratorNode = iteratorNode->getNext();
    }
    return -1;
}

template <typename T>
void SimpleLinkedList<T>::addLast(T valor){
    Node<T> *newNode = new Node<T>(valor);
    if(isEmpty()){
        head = newNode;
        return;
    }

    Node<T> *iteratorNode = head;
    while(iteratorNode->getNext() != nullptr){
        iteratorNode = iteratorNode->getNext();
    }
    iteratorNode->setNext(newNode);
}

template <typename T>
void SimpleLinkedList<T>::addFirst(T valor){
    Node<T> *newNode = new Node<T>(valor, head);
    head = newNode;
}

template <typename T>
void SimpleLinkedList<T>::addAfter(T referencia, T valor){
    if(search(referencia) < 0) return;

    Node<T> *iteratorNode = head;
    while(iteratorNode->getNext() != nullptr && iteratorNode->getData() != referencia){
        iteratorNode = iteratorNode->getNext();
    }
    Node<T> *newNode = new Node(valor, iteratorNode->getNext());
    iteratorNode->setNext(newNode);
}

template <typename T>
void SimpleLinkedList<T>::deleteAt(int index){
    if(index < 0 || index >= getSize() || isEmpty()) return;

    if(index == 0){
        deleteStart();
        return;
    }

    int indexPosition = 0;
    Node<T> *iteratorNode = head;
    Node<T> *prevNode = nullptr;
    while(iteratorNode->getNext() != nullptr && indexPosition < index){
        prevNode = iteratorNode;
        iteratorNode = iteratorNode->getNext();
        indexPosition++;
    }
    prevNode->setNext(iteratorNode->getNext());
    iteratorNode->setNext(nullptr);
    delete iteratorNode;
}

template <typename T>
void SimpleLinkedList<T>::deleteStart(){
    if(isEmpty()) return;

    Node<T> *aux = head;
    head = head->getNext();
    aux->setNext(nullptr);
    delete aux;
}

template <typename T>
void SimpleLinkedList<T>::deleteLast(){
    if(isEmpty()) return;

    if(getSize() == 1){
        deleteStart();
        return;
    }

    Node<T> *iteratorNode = head;
    Node<T> *prevNode = nullptr;
    while(iteratorNode->getNext() != nullptr){
        prevNode = iteratorNode;
        iteratorNode = iteratorNode->getNext();
    }
    prevNode->setNext(nullptr);
    delete iteratorNode;
}

template <typename T>
void SimpleLinkedList<T>::update(T a_buscar, T valor){
    if(search(a_buscar) < 0) return;

    Node<T> *iteratorNode = head;
    while(iteratorNode->getNext() != nullptr && iteratorNode->getData() != a_buscar){
        iteratorNode = iteratorNode->getNext();
    }
    iteratorNode->setData(valor);
}