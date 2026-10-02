import java.util.ArrayList;

public class ArrayListExample {
    public static void main(String[] args) {
        // Create an ArrayList of Strings
        ArrayList<String> fruits = new ArrayList<>();

        // 1. Insertion (Enqueue/Add)
        fruits.add("Apple");
        fruits.add("Banana");
        fruits.add("Mango");
        System.out.println("Initial List: " + fruits);

        // 2. Accessing elements by index
        String favorite = fruits.get(1); // Retrieves "Banana"
        System.out.println("Element at index 1: " + favorite);

        // 3. Updating an element
        fruits.set(2, "Orange"); // Replaces "Mango" with "Orange"

        // 4. Deletion
        fruits.remove("Apple"); // Removes by value

        System.out.println("Final List: " + fruits);
    }
}
