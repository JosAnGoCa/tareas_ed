#include "queueArray.h"

template <typename T>
queueArray<T>::queueArray(int size) {
    queue = new T[size];
    frontIndex = -1;
    back = -1;
    length = size;
}

template <typename T>
queueArray<T>::~queueArray() {
    delete queue;
}

template <typename T>
bool queueArray<T>::isEmpty(){
    return frontIndex == -1;
}

template <typename T>
int queueArray<T>::getLength() {
    return length;
}

template <typename T>
T queueArray<T>::dequeue() {
    T element;
    if(!isEmpty()) {
        element = queue[frontIndex];
        if (frontIndex == back) {
            frontIndex = -1;
            back = -1;
        } else {
            frontIndex = move(frontIndex);
        }
    }
    return element;
}

template <typename T>
T queueArray<T>::frontValue() {
    if(isEmpty()){
        throw std::out_of_range("Queue is empty");
    }
    return queue[frontIndex];
}

template <typename T>
void queueArray<T>::enqueue(T value) {
    if (!isFull()) {
        back = move(back);
        if (isEmpty()) {
            frontIndex++;
        }
        queue[back] = value;
    }
    length++;
}

template <typename T>
bool queueArray<T>::isFull() {
    return move(back) == frontIndex;
}

template <typename T>
int queueArray<T>::move(int number) {
    return (number + 1) % length;
}
