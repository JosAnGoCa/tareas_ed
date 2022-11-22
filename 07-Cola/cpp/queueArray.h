#ifndef CLASE_QUEUEARRAY_H
#define CLASE_QUEUEARRAY_H

#include <iostream>

template <typename T>
class queueArray {
    private:
        T *queue;
        int frontIndex, back, length;

    public:
        queueArray(int size);

        ~queueArray();

        bool isEmpty();

        int getLength();

        T dequeue();

        T frontValue();

        void enqueue(T valor);

        bool isFull();

        friend std::ostream& operator<<(std::ostream& os, const queueArray<T>& queue){
            if (!queue.isEmpty()) {
                int aux = queue.frontIndex;
                do {
                    os << queue.queue[aux] << " ";
                    aux = move(aux);
                } while (aux != move(queue.back));
            } else {
                os << "null";
            }
            return os;
        }

    private:
        int move(int number);
};

#include "queueArray.cpp"

#endif // CLASE_QUEUEARRAY_H