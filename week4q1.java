import java.util.*;
 class week4{
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
    // printing elements int he array
    public static void output(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
            
        }
    }
//  sum of all elements
    public static int sum(int a[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++)
        {
           sum=sum+a[i];
            
        }
        return sum;
    }
    // average of array elements
    public static float average(int a[],int n)
    {
        float avg=(float)sum(a, n)/n;
        return avg;
    }
    // minimum element
    public static int minimum(int a[],int n)
    {
        int min=a[0];
        for(int i=1;i<n;i++)
        {
           if(a[i]<min)
           min=a[i];
            
        }
        return min;
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
    System.out.println("The sum of all elements in the array is "+sum(a, n));
    System.out.println("The average of all elements in the array is "+average(a, n));
    System.out.println("The minimum element of all elements in the array is "+minimum(a, n));
    System.out.println("The maximum element of all elements in the array is "+maximum(a, n));
    

    }
}
