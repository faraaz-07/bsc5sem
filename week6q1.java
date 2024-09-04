public class week6q1 {
    static int que[]=new int[50];
    static int rear=-1,front=-1;
    public static void enque(int val)
    {
        if(front==-1&&rear==-1)
        {
            que[++rear]=val;
            ++front;
        }
        else if(rear==50)
        {
        System.out.println("Queue Overflow");
       }
        else
        {
        que[++rear]=val;
    }
    }
    public static void deque()
    {
        if(front>rear)
        System.out.println("Queue underflow.");
        else
        front++;
    }
    public static void display()
    {
        for(int i=front;i<=rear;i++){
            System.out.print(que[i]+" ");
        }
        System.out.println("");
    }
    public static void main(String args[])
    {
     enque(5);
     enque(10);
     enque(15);
     enque(20);
     enque(25);
     display();
     deque();
     display();
     deque();
     deque();
     display();
    }
}
