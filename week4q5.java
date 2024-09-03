import java.util.*;
public class week4q5{
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
public static void sort(int a[],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
       if(a[j]>a[j+1])
       {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
       }
       
        }
    }
}
    public static void main(String args[])
    {
    int a[]=new int[50];
    int n = input(a);
    System.out.println("Array before sorting.");
    output(a, n);
    sort(a,n);
    System.out.println("");
    System.out.println("Array after sorting.");
    output(a,n);
    

    }
}
