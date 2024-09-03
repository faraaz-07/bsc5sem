import java.util.*;
import java.lang.*;
public class week3 {
    public static void binary(int n)
    {
     String str="";
     int rem;
     while(n!=0){
     rem=n%2;
     str=rem+str;
     n=n/2;
     }
        System.out.println("Binary number:"+str);
    }
    public static void decimal(int n){
    int i=0,dig,dec=0;
    while(n!=0)
    {
     dig=n%10;
     n=n/10;
     dec=dec+(int)Math.pow(2,i)*dig;
     i++;
    }
        System.out.println("Decimal no:"+dec);
    }
    public static void countvowel(String str){
      char ch;
      int a=0,b=0;
      for(int i=0;i<str.length();i++){
      ch = str.charAt(i);
       if((ch>=65&&ch<=90)||(ch>=97&&ch<=122))
       {
           if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
           a++;
           else
           b++;
       }      
        }
      System.out.println("The number of vowels is"+a);
          System.out.println("The number of consonants is"+b);    
    }
    public static void sumofdigits(int n){
    int sum=0,dig;
    while(n!=0){
    dig=n%10;
    n=n/10;
    sum=sum+dig;
    }
        System.out.println("The sum of digits is "+sum);
    }
    public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
//    Decimal to binary
        System.out.println("Enter a decimal no to convert into binary:");
        int n=sc.nextInt();
        binary(n);
//        Binary to decimal
        System.out.println("Enter a binary number to convert into decimal:");
        int n1=sc.nextInt();
        decimal(n1);
//        Vowels and Consonants count
         System.out.println("Enter a word to check the no of vowels and consonants in it.");
         String s=sc.next();
         countvowel(s);
//         sum of digits
        System.out.println("Enter a no to find the sum of its digits.");
        int num=sc.nextInt();
        sumofdigits(num);
    }
}
