import java.util.ArrayDeque;
import java.util.Deque;

public class StackExample {
    public static void main(String[] args) {
        // ArrayDeque is preferred over the legacy Vector-based Stack class
        Deque<String> stack = new ArrayDeque<>();

        // 1. Push (Add element to the top)
        stack.push("Book A");
        stack.push("Book B");
        stack.push("Book C");
        System.out.println("Stack status: " + stack);

        // 2. Peek (Look at the top element without removing it)
        System.out.println("Top element: " + stack.peek());

        // 3. Pop (Remove and return the top element)
        String removedElement = stack.pop();
        System.out.println("Popped: " + removedElement);

        System.out.println("Final Stack: " + stack);
    }
}
