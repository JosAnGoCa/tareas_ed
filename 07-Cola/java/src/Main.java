public class Main {
    public static void main(String[] args) throws Exception {
        QueueNode<Integer> nodeQueue = new QueueNode<>();
        System.out.println("QueueNode");
        System.out.println("isEmpty: " + nodeQueue.isEmpty());
        System.out.println("enqueue(1)");
        nodeQueue.enqueue(1);
        System.out.println("enqueue(2)");
        nodeQueue.enqueue(2);
        System.out.println("enqueue(3)");
        nodeQueue.enqueue(3);
        System.out.println(nodeQueue);
        System.out.println("length: " + nodeQueue.length());
        System.out.println("isEmpty: " + nodeQueue.isEmpty());
        System.out.println("front: " + nodeQueue.front());
        System.out.println("dequeue: " + nodeQueue.dequeue());
        System.out.println("dequeue: " + nodeQueue.dequeue());
        System.out.println("dequeue: " + nodeQueue.dequeue());
        System.out.println("isEmpty: " + nodeQueue.isEmpty());

        QueueArray<Integer> arrayQueue = new QueueArray<>(5);
        System.out.println("QueueArray");
        System.out.println("isEmpty: " + arrayQueue.isEmpty());
        System.out.println("enqueue(1)");
        arrayQueue.enqueue(1);
        System.out.println("enqueue(2)");
        arrayQueue.enqueue(2);
        System.out.println("enqueue(3)");
        arrayQueue.enqueue(3);
        System.out.println(arrayQueue);
        System.out.println("length: " + arrayQueue.length());
        System.out.println("isEmpty: " + arrayQueue.isEmpty());
        System.out.println("front: " + arrayQueue.font());
        System.out.println("dequeue: " + arrayQueue.dequeue());
        System.out.println("dequeue: " + arrayQueue.dequeue());
        System.out.println("dequeue: " + arrayQueue.dequeue());
        System.out.println("isEmpty: " + arrayQueue.isEmpty());
    }
}
