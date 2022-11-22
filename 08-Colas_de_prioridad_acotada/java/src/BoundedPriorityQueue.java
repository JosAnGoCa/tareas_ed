import java.util.Arrays;

public class BoundedPriorityQueue<T> {
    private QueueNode<T>[] boundedQueue;
    private int size, length;

    public BoundedPriorityQueue(int size) {
        boundedQueue = new QueueNode[size];
        this.size = size;
        length = 0;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public int length() {
        return length;
    }

    public void enqueue(int priority, T value) {
        if(priority < 0 && priority >= size) {
            throw new IllegalArgumentException("Priority must be between 0 and " + (size - 1));
        }

        if(boundedQueue[priority] == null) {
            boundedQueue[priority] = new QueueNode<T>();
        }

        boundedQueue[priority].enqueue(value);
        length++;
    }

    public T dequeue() {
        if(isEmpty()) {
            return null;
        }

        for(int i = 0; i < size; i++) {
            if(boundedQueue[i] != null && !boundedQueue[i].isEmpty()) {
                length--;
                return boundedQueue[i].dequeue();
            }
        }

        return null;
    }

    public T front() {
        if(isEmpty()) {
            return null;
        }

        for(int i = 0; i < size; i++) {
            if(boundedQueue[i] != null && !boundedQueue[i].isEmpty()) {
                return boundedQueue[i].front();
            }
        }

        return null;
    }

    @Override
    public String toString() {
        String queueString = "";
        for(int i = 0; i < size; i++) {
            queueString += i + ": ";
            if (boundedQueue[i] != null && !boundedQueue[i].isEmpty()) {
                queueString += boundedQueue[i] + "\n";
            } else {
                queueString += "null\n";
            }
        }
        return queueString;
    }
}
