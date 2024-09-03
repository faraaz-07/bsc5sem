
import java.util.*;
public class week2 {
    public static void fibonacci(int n){
        int a=0;
        int b=1;
        int c;
        System.out.print("0,1");
        for(int i=3;i<=n;i++)
        {
            c=a+b;
            a=b;
            b=c;
            System.out.print(","+c);
        }
    }
    public static int factorial(int n){
        int i,f=1;
        for(i=1;i<=n;i++){
            f=f*i;
        }
        return f;
    }
    public static int reverse(int n){
        int dig,rev=0;
        while(n!=0)
        {
            dig=n%10;
            n=n/10;
            rev=rev*10+dig;
        }
        return rev;
    }
    public static void pallindrome(int n){
        int rev=reverse(n);
        if(rev==n)
        System.out.println(n+" is pallindrome." );
        else
        System.out.println(n+"  is not pallindrome." );
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter 1 for displaying fibonacci series upto a given range,2 for finding the factorial of a given number, 3 to reverse a given number,4 for finding whether the given number is pallindrome.");
        int ch=sc.nextInt();
        switch(ch)
        {
            case 1:
            //Fibonacci
         System.out.print("Enter the range of fibonacci series :");
         int x=sc.nextInt();
         fibonacci(x);
         break;
        //  Factorial
        case 2:
        System.out.print("Enter the number to find the factorial of :");
         int x1=sc.nextInt();
        int fac=factorial(x1);
         System.out.println("");
         System.out.println("Factorial of entered number is "+fac);
        break;
        case 3:
         //  Reverse of a number
        System.out.print("Enter the number to find the reverse of :");
        int x2=sc.nextInt();
        int rev=reverse(x2);
        System.out.println("Reverse of entered number is "+rev);
        break;
        case 4:
        System.out.print("Enter a number to check whether it is pallindrome :");
        int x3=sc.nextInt();
        pallindrome(x3);
        break;
        default:
        System.out.println("Invalid entry.");
    }
         
    }
}