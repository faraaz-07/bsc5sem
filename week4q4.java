import java.util.*;
public class week4q4{
    // inputing array elements
    public static int input(int a[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of array:");
        int n=sc.nextInt();
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter array element"+(i+1)+" : ");
            a[i]=sc.nextInt();
        }
        return n;
    }
    // printing elements in the array
    public static void output(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
            
        }
    }
// maximum elemnet
public static int maximum(int a[],int n)
{
    int max=a[0];
    for(int i=1;i<n;i++)
    {
       if(a[i]>max)
       max=a[i];
        
    }
    return max;
}
    public static void main(String args[])
    {
    int a[]=new int[50];
    int n = input(a);
    
    output(a, 0);
    System.out.println("The largest element of in the array is "+maximum(a, n));
    

    }
}
