public class Main {
    public static void main(String[] args) throws Exception {
        StackNode<Integer> nodeStack = new StackNode<>();
        System.out.println("Stack using nodes");
        System.out.println("isEmpty(): " + nodeStack.isEmpty());
        System.out.println("length(): " + nodeStack.length());
        System.out.println("push(1)");
        nodeStack.push(1);
        System.out.println("push(2)");
        nodeStack.push(2);
        System.out.println("push(3)");
        nodeStack.push(3);
        System.out.println(nodeStack);
        System.out.println("peek(): " + nodeStack.peek());
        System.out.println("pop(): " + nodeStack.pop());
        System.out.println(nodeStack);

        StackArray<Integer> arrayStack = new StackArray<>(5);
        System.out.println("Stack using Array");
        System.out.println("isEmpty(): " + arrayStack.isEmpty());
        System.out.println("length(): " + arrayStack.length());
        System.out.println("push(1)");
        arrayStack.push(1);
        System.out.println("push(2)");
        arrayStack.push(2);
        System.out.println("push(3)");
        arrayStack.push(3);
        System.out.println("push(4)");
        arrayStack.push(4);
        System.out.println("push(5)");
        arrayStack.push(5);
        System.out.println("isFull(): " + arrayStack.isFull());
        System.out.println(arrayStack);
        System.out.println("peek(): " + arrayStack.peek());
        System.out.println("pop(): " + arrayStack.pop());
        System.out.println(arrayStack);
    }
}
