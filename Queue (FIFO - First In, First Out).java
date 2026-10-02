import java.util.LinkedList;
import java.util.Queue;

public class QueueExample {
    public static void main(String[] args) {
        // Instantiating a Queue using LinkedList
        Queue<Integer> line = new LinkedList<>();

        // 1. Enqueue (Add elements to the tail)
        line.offer(101);
        line.offer(102);
        line.offer(103);
        System.out.println("Queue line: " + line);

        // 2. Peek (Look at the front element)
        System.out.println("Front of the line: " + line.peek());

        // 3. Dequeue (Remove element from the front)
        int served = line.poll(); 
        System.out.println("Served customer: " + served);

        System.out.println("Remaining line: " + line);
    }
}
