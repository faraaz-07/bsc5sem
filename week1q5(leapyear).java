import java.util.*;
public class week1q5{
    public static boolean leapyear(int n)
    {
        if(n%4==0&&(n%100!=0||n%400==0))
        return true;
        else 
        return false;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter a year:");
        int n=sc.nextInt();
        if(leapyear(n))
        System.out.println("Leap Year.");
        else
        System.out.println("Not Leap Year.");   
    }
}