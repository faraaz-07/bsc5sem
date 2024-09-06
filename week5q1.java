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
public static void merge(int a[],int b[],int c[],int n1,int n2)
    {
        int i=0,j=0;
            for(int k=0;k<(n1+n2);k++)
            {
                if(i!=n1&&j!=n2)
        {
                if(a[i]<b[j])
                {
                    c[k]=a[i];
                    i++;
                }
                else 
                {
                    c[k]=b[j];
                    j++;
                }
            }
        else
        {
         if(i==n1)
         {
            c[k]=b[j++];
         }
         else
         {
         c[k]=a[i++];
         }
        }
    }
}    public static void output(int a[],int n)
    {
        for(int i=0;i<n;i++)
        {
            System.out.print(a[i]+" ");
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
    System.out.println("Array before merging.\n");
    output(a1,n1);
    System.out.println("");
    output(a2,n2);
    merge(a1,a2,c,n1,n2);
    System.out.println("\nArray after sorting.\n");
    output(c, n1+n2);
    
    }
    
}
