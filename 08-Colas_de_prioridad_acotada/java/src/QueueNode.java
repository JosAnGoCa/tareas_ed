public class QueueNode<T> {
    private Node<T> front;
    private Node<T> back;
    private int length;

    public QueueNode() {
        front = back = null;
        length = 0;
    }

    public boolean isEmpty() {
        return front == null && length == 0;
    }

    public int length() {
        return length;
    }

    public T dequeue() {
        if(isEmpty()) {
            return null;
        }

        if(front == back) {
            back = null;
        }

        T topValue = front.getData();
        front = front.getNext();
        length--;
        return topValue;
    }

    public T front() {
        if(isEmpty()) {
            return null;
        }

        return front.getData();
    }

    public void enqueue(T value) {
        Node<T> newNode = new Node<T>(value);
        if(isEmpty()) {
            front = back = newNode;
        } else {
            back.setNext(newNode);
            back = newNode;
        }
        length++;
    }

    @Override
    public String toString() {
        String stackString = "";
        Node<T> iteratorNode = front;
        while(iteratorNode != null){
            stackString += iteratorNode;
            iteratorNode = iteratorNode.getNext();
        }
        return stackString;
    }
}
