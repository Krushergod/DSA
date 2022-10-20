
public class Stack {

    int arr[] = null;
    int capacity = 100;
    int top = -1; // contains tracking of the stack
    int deleted;

    public Stack() { // creates a stack with fixed capacity size
        this.arr = new int[capacity];
    }

    public Stack(int capacity) { // creates a stack with the value of capacity when constructor is called
        this.capacity = capacity;
        this.arr = new int [capacity];
    }

    public void push(int item) { // push an item into the stack
        if(isFull()) 
            System.out.println("Stack overflow!\nCan't push " + item + " to stack.");
        else {
            arr[++top] = item;
        }
    }

    public void pop() { // pop item from the stack
        if(isEmpty()) 
            System.out.println("Stack underflow!\nCan't pop anything.");
        else {
            deleted = arr[top--];
            System.out.println("Poped new item : " + deleted);
        }
    }

    public boolean isEmpty() { // check whether the stack is empty of not.
        if(top == -1) return true;
        else return false;
    }

    public boolean isFull() { // check whether the stack is full or not.
        if(top == capacity-1) return true;
        else return false; 
    }

    public void print() {  // printing the stack
        if(isEmpty()) System.out.println("Nothing to print!");
        else {
            for(int i = top; i >= 0; i--) {
                System.out.print(arr[i] + " ");
            }
            System.out.println();
        }
    }

    public int size() {  // returns the size of the stack
        return top+1;
    }

    public int peek() { // returns stack's top value
        if(isEmpty()) return -1;
        return arr[top];
    }

    public static void main(String[] args) {

        Stack stack = new Stack(10);
        for(int i = 0; i < 10; i++) stack.push(i+10);
        stack.print();
        stack.pop();
        stack.print();
        stack.push(20);
        stack.push(21);
        // Stack stack = new Stack(); // 2nd type of stack object creating with capacity 100
        // stack.print();
        stack.pop();
        int peeked_item = stack.peek();
        if(peeked_item == -1) System.out.println("Nothing to peek!");
        else System.out.println(peeked_item + " peeked from the top position...!");

        System.out.println("Size of the Satck is : " + stack.size());
        
    }
}
