import java.util.*;

public class week1 {
    //For Addition
    public static void sum(int i,int j){
    int sum =i+j;
    System.out.println("The sum of two entered numbers is "+sum);
    }
    
    //odd or even check
    public static void oddeven(int x)
    {
        if(x%2==0)
            System.out.println("Entered number is even.");
        else 
            System.out.println("Entered number is odd");
    }
    //Largest of three
    public static void largest(int a,int b,int c)
    {
        if(a>b)
        {
            if(a>c)
                System.out.println(a+" is the largest number.");
            else
                System.out.println(c+" is the largest number.");
        }
        else
        {
            if(b>c)
                System.out.println(b+" is the largest.");
            else 
                System.out.println(c+" is the largest.");
        
        }
    }
    // Simple Calculator
    public static void simplecal(int a,int b,char c)
    {
       
    switch(c)
    {
        case '+':
            System.out.println("Sum = "+(a+b)); 
            break;
        case '-':
            System.out.println("Difference = "+(a-b)); 
            break;
        case '*':
            System.out.println("Product = "+(a*b)); 
            break;
        case '/':
            if(b!=0)
            System.out.println("Quotient = "+(a/b)); 
            else 
                System.out.println("Not Defined");
            break;
        default:
            System.out.println("Invalid Character");
                
    }
    
    
    }
    
    
public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter 1 to perform addition , 2 for checking even or odd ,3 for largest between three no and 4 for simple calculator.");
    int choice = sc.nextInt();
    switch(choice)
    {
    // Addition
        case 1:
    System.out.println("Enter two numbers .");
    System.out.println("First Number:");
    int a=sc.nextInt();
    System.out.println("Second number;");
    int b=sc.nextInt();
    sum(a,b);
    break;
    //Even or odd
        case 2:
    System.out.println("Enter a number :");
    int x=sc.nextInt();
    oddeven(x);
    break;
    //Largest of three numbers 
        case 3:
    System.out.println("Enter Three Numbers :");
   int x1=sc.nextInt();
   int x2=sc.nextInt();
   int x3=sc.nextInt();
   largest(x1,x2,x3);
   break;
   //Simple calculator
        case 4:
    System.out.println("Enter + for addition , - for subtraction,* for multiplication and / for division.");
    char ch=sc.next().charAt(0);
    System.out.println("Enter two numbers : ");
    int x4=sc.nextInt();
    int x5=sc.nextInt();
    simplecal(x4,x5,ch);
    break;
        default:
            
            System.out.println("Invalid Input");
            
    }
}                                                                            
}
