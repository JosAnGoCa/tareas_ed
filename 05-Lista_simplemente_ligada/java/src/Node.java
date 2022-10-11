public class Node<T> {
    private T data;
    private Node<T> next;

    public Node() {
    }

    public Node(T valor) {
        this.data = valor;
    }

    public Node(T data, Node<T> next) {
        this.data = data;
        this.next = next;
    }

    public T getData() {
        return data;
    }

    public void setData(T data) {
        this.data = data;
    }

    public Node<T> getNext() {
        return next;
    }

    public void setNext(Node<T> next) {
        this.next = next;
    }

    @Override
    public String toString() {
        return "|" + data + "| --> ";
    }
}
