import java.util.LinkedList;

public class LinkedListExample {
    public static void main(String[] args) {
        LinkedList<Integer> numbers = new LinkedList<>();

        // Insertion
        numbers.add(10);
        numbers.add(20);
        
        // Add elements to the front and back (O(1) operation)
        numbers.addFirst(5);  // [5, 10, 20]
        numbers.addLast(30);  // [5, 10, 20, 30]
        System.out.println("Linked List: " + numbers);

        // Accessing Head and Tail
        System.out.println("First Element: " + numbers.getFirst());
        System.out.println("Last Element: " + numbers.getLast());

        // Deletion
        numbers.removeFirst(); // Removes 5
        numbers.removeLast();  // Removes 30
        
        System.out.println("After removals: " + numbers);
    }
}
