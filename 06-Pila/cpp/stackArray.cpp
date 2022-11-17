#include "stackArray.h"

template <typename T>
stackArray<T>::stackArray(int size) {
    stack = new T[size];
    top = -1;
    this->size = size;
}

template <typename T>
stackArray<T>::~stackArray() {
    delete stack;
}

template <typename T>
bool stackArray<T>::isEmpty(){
    return top == -1;
}

template <typename T>
int stackArray<T>::getLength() {
    return top + 1;
}

template <typename T>
T stackArray<T>::pop() {
    if(isEmpty()){
        throw std::out_of_range("Stack is empty");
    }
    T value = stack[top];
    top--;    
    return value;
}

template <typename T>
T stackArray<T>::peek() {
    if(isEmpty()){
        throw std::out_of_range("Stack is empty");
    }
    return stack[top];
}

template <typename T>
void stackArray<T>::push(T value) {
    if (isFull()) {
        throw std::out_of_range("Stack is full");
    }
    top++;
    stack[top] = value;
}

template <typename T>
bool stackArray<T>::isFull() {
    return top == sizeof(*stack) + 1;
}
