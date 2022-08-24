#include <iostream>

using namespace std;

template <typename T>
class Arreglo {
    private:
        T *data;
        int size;

    public:
        friend std::ostream& operator<<(std::ostream& os, const Arreglo<T>& arreglo){
            os << "[";
            for(int i = 0; i < arreglo.size-1; i++) {
                os << arreglo.data[i] << ", ";
            }
            os << arreglo.data[arreglo.size-1] << "]";
            return os;
        }

        Arreglo(int size) {
            this->size = size;
            this->data = new T[size];
        }

        ~Arreglo() {
            delete[] this->data;
        }

        T getItem(int index) {
            if(index >= this->size || index < 0) {
                throw out_of_range("Invalid index, out of bounds");
            }
            return this->data[index];
        }

        void setItem(int index, T value) {
            if(index >= this->size || index < 0) {
                throw out_of_range("Invalid index, out of bounds");
            }
            data[index] = value;
        }

        int getLength() {
            return this->size;
        }

        void clear(T value) {
            for(int i = 0; i < this->size; i++) {
                this->data[i] = value;
            }
        }
};

int main() {
    return 0;
}