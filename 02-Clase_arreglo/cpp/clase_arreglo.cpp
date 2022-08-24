#include <iostream>

using namespace std;

template <typename T>
class Arreglo {
    private:
        T *data;
        int size;
    public:
        friend std::ostream& operator<<(std::ostream& os, const Arreglo<T>& a){
            os << "[";
            for(int i = 0; i < a.size-1; i++) {
                os << a.data[i] << ", ";
            }
            os << a.data[a.size-1] << "]";
            return os;
        }

        Arreglo(int size) {
            this->size = size;
            data = new T[size];
        }

        ~Arreglo() {
            delete[] data;
        }

        T getItem(int index) {
            if(index >= size || index < 0) {
                throw out_of_range("Invalid index, out of bounds");
            }
            return data[index];
        }

        void setItem(int index, T value) {
            if(index >= size || index < 0) {
                throw out_of_range("Invalid index, out of bounds");
            }
            data[index] = value;
        }

        int getLength() {
            return size;
        }

        void clear(T value) {
            for(int i = 0; i < size; i++) {
                data[i] = value;
            }
        }
};

int main() {
    return 0;
}