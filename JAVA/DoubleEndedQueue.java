//implement double ended queue with insertion deletion ?
//from both ends
class  DoubleEndedQueue{
    private  int  maxSize;
    private  long  [] queArray;
    private  int  front;
    private  int  rear;
    private  int  nItems;
    public  DoubleEndedQueue(int  s){
        maxSize = s;
        queArray = new  long [maxSize];
        front = 0;
        rear = -1;
        nItems = 0;
    }
    public  void  insertLeft(long  j){
        if (nItems == 0)
            rear = 0;
        if (front == 0)
            front = maxSize;
        queArray[--front] = j;
        nItems++;
    }
    public  void  insertRight(long  j){
        if (rear == maxSize - 1)
            rear = -1;
        queArray[++rear] = j;
        nItems++;
    }
    public  long  removeLeft(){
        long  temp = queArray[front++];
        if (front == maxSize)
            front = 0;
        nItems--;
        return  temp;
    }
    public  long  removeRight(){
        long  temp = queArray[rear--];
        if (rear == -1)
            rear = maxSize - 1;
        nItems--;
        return  temp;
    }
    public  long  peekFront(){
        return  queArray[front];
    }
    public  boolean  isEmpty(){
        return  (nItems == 0);
    }
    public  boolean  isFull(){
        return  (nItems == maxSize);
    }
    public  int  size(){
        return  nItems;
    }


}

public static void  main(String[] args){
        DoubleEndedQueue theQueue = new  DoubleEndedQueue(5);
        theQueue.insertLeft(10);
        theQueue.insertLeft(20);
        theQueue.insertRight(30);
        theQueue.insertRight(40);
        theQueue.insertRight(50);
        while (!theQueue.isEmpty()){
            long  n = theQueue.removeLeft();
            System.out.print(n);
            System.out.print(" ");
        }
        System.out.println("");
    }

