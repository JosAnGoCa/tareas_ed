public class QueueArray<T> {
    private T[] queue;
    private int front, tail, length;

    public QueueArray(int size) {
        queue = (T[]) new Object[size];
        front = tail = -1;
        length = 0;
    }

    public boolean isEmpty() {
        return front == -1;
    }

    public int length() {
        return length;
    }

    public T dequeue() {
        T element = null;
        if(!isEmpty()) {
            element = queue[front];
            if (front == tail) {
                front = tail = -1;
            } else {
                front = move(front);
            }
        }
        return element;
    }

    public T font() {
        if (isEmpty()) {
            return null;
        }
        return queue[front];
    }

    public void enqueue(T element) throws Exception {
        if (!isFull()) {
            tail = move(tail);
            if (isEmpty()) {
                front++;
            }
            queue[tail] = element;
        }
        length++;
    }

    public boolean isFull() {
        return  move(tail) == front;
    }

    private int move(int number) {
        return (number + 1) % queue.length;
    }

    public String toString() {
        String result = "";
        if (!isEmpty()) {
            int aux = front;
            do {
                result += queue[aux] + " ";
                aux = move(aux);
            } while (aux != move(tail));
        } else {
            result += "null";
        }
        return result;
    }
}
