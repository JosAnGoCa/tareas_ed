#ifndef CLASE_STACKARRAY_H
#define CLASE_STACKARRAY_H

#include <iostream>

template <typename T>
class stackArray {
    private:
        T *stack;
        int top;
        int size;

    public:
        stackArray(int size);

        ~stackArray();

        bool isEmpty();

        int getLength();

        T pop();

        T peek();

        void push(T valor);

        bool isFull();

        friend std::ostream& operator<<(std::ostream& os, const stackArray<T>& stackArr){
            for(int i = stackArr.top; i >= 0; i--) {
                os << stackArr.stack[i] << " ";
            }
            return os;
        }
};

#include "stackArray.cpp"

#endif // CLASE_STACKARRAY_H