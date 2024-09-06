import java.util.*;
 public class week5q2 {
    public static void input(int a[][],int m,int n)
    {
        Scanner sc = new Scanner(System.in);
        int c=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            System.out.println("Enter array element"+(c++)+" : ");
            a[i][j]=sc.nextInt();
            }
        }
    }
    public static void output(int a[][],int m,int n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
            System.out.print(a[i][j]+" ");
            }
            System.out.println(" ");
        }
    }
    public static void transpose(int a[][],int t[][],int m,int n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
               t[i][j]=a[j][i];
           
        }
        }
    }
    public static void main(String args[])
    {
    int a[][]=new int[50][50];
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of first matrix in the format 'mxn' where m:no of rows and n:no of columns.");
    System.out.println("Enter the no of rows: ");
    int m=sc.nextInt();
    System.out.println("Enter the no of column: ");
    int n=sc.nextInt();
    input(a,m,n);


    int b[][]=new int[50][50];
    
    System.out.println(" Matrix.");
    output(a,m,n);
    
    transpose(a,b,m,n);
    System.out.println(" Transpose Matrix.");
    output(b,m,n);
    
    
    }
}

    

