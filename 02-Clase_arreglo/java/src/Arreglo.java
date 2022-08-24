import java.util.Arrays;

public class Arreglo<T> {
    private Object[] data;
    private int size;

    public Arreglo(int size) {
        this.size = size;
        data = new Object [size];
    }

    public Object getItem(int index) throws ArrayIndexOutOfBoundsException {
        if(index >= this.size || index < 0) {
            throw new ArrayIndexOutOfBoundsException("Invalid index, out of bounds");
        }
        return data[index];
    }

    public void setItem(int index, T value) throws ArrayIndexOutOfBoundsException {
        if(index >= this.size || index < 0) {
            throw new ArrayIndexOutOfBoundsException("Invalid index, out of bounds");
        }
        data[index] = value;
    }

    public int getLenght() {
        return this.size;
    }

    public void clear(T value) {
        for(int i = 0; i < size; i++) {
            data[i] = value;
        }
    }

    @Override
    public String toString() {
        return Arrays.toString(data);
    }
}
