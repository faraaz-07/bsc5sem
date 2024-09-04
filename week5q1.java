import java.util.*;
public class week5q1 {
    public static void input(int a[],int n)
    {
        Scanner sc = new Scanner(System.in);
        for(int i=0;i<n;i++)
        {
            System.out.println("Enter array element"+(i+1)+" : ");
            a[i]=sc.nextInt();
        }
    }
    public static void merge(int a1[],int a2[],int n1,int n2,int c[])
    {
        int s=0;int x=0;
    for (int i=0;i<n1+n2;i++)
    {
        if(i%2!=0)
        c[i]=a1[s++];
        else
        c[i]=a2[x++];
    }
    }
    public static void output(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
        }
    }
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
    Scanner sc = new Scanner(System.in);
    int a1[]=new int[50];
    int a2[]=new int[50];
    int c[]=new int[100];
    System.out .println("Enter the size of array 1: ");
    int n1=sc.nextInt();
    System.out .println("Enter the size of array 2: ");
    int n2 =sc.nextInt();
    input(a1,n1);
    input(a2,n2);
    System.out.println("Array before merging.");
    output(a1,n1);
    System.out.println("");
    output(a2,n2);
    merge(a1,a2,n1,n2,c);
    System.out.println("\nArray after merging.");
    output(c,n1+n2);
    sort(c, n1+n2);
    System.out.println("Array after sorting.");
    output(c, n1+n2);
    
    }
    
}