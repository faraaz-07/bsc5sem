import java.util.*;
public class week5q3
 {
    public static void main(String args[])
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter a range to print prinme numbers .");
        System.out.println("Enter lower range: ");
        int l=sc.nextInt();
        System.out.println("Enter upper range: ");
        int u=sc.nextInt();
        for(int i=l;i<=u;i++)
        {
            int flag=0;
            for(int j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                  flag=1;
                  break;
                }
            }
            if(flag==0)
            System.out.println(i+" ");
            
        }
     }
 }

