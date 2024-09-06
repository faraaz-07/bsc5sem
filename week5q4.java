class stack {
   static int a[]=new int[50];
    static int top=-1;
        public static boolean isempty()
        {
            if(top==-1)
            return true;
            else 
            return false;
        }
        public static boolean isfull()
        {
            if(top==50)
            return true;
            else 
            return false;
        }

        public static void push(int val){
            if(isfull())
            System.out.println("Stack overflow");
            else
            a[++top]=val;
        }
        public static void pop(){
            if(isempty())
            System.out.println("Stack is empty.Cannot pop.");
            else
             --top;
    
        }
        public static int peek(){
            if(isempty()){
            System.out.println("Stack is empty.Cannot peek.");
            return -1;
        }
            else
            return a[top];
    
        }
    public static void diaplay()
        {
            for(int i=0;i<=top;i++)
            {
                System.out.print(a[i]+" | ");
            }
        }
        public static void main(String args[])
        {

        push(5);
         push(15);
         push(20);
         push(25);
         push(30);
        System.out.println(peek());
        pop();
         System.out.println(peek());
         pop();
         System.out.println(peek());
         diaplay();
        }
        
    }
    

