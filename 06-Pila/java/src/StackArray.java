public class StackArray<T> {
    private T[] stack;
    private int top;

    public StackArray(int size) {
        stack = (T[]) new Object[size];
        top = -1;
    }

    public boolean isEmpty() {
        return top == -1;
    }

    public int length() {
        return top + 1;
    }

    public T pop() {
        if (isEmpty()) {
            return null;
        }
        T element = stack[top];
        top--;
        return element;
    }

    public T peek() {
        if (isEmpty()) {
            return null;
        }
        return stack[top];
    }

    public void push(T element) throws Exception {
        if (isFull()) {
            throw new Exception("Error longitud maxima");
        }
        top++;
        stack[top] = element;
    }

    public boolean isFull() {
        return top == stack.length - 1;
    }

    public String toString() {
        String stackString = "";
        for (int i = 0; i <= top; i++) {
            stackString += stack[i] + " -> ";
        }
        return stackString;
    }
}
