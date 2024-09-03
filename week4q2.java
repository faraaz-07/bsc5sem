import java.util.*;
public class week4q2{
    // inputing matrix elements
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
    // printing elements in the matrix
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
//  matrix addition
    public static void add(int a[][],int b[][],int c[][],int m,int n)
    {
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
           c[i][j]=a[i][j]+b[i][j];
            }
        }
    }
    public static void main(String args[])
    {
    int a[][]=new int[50][50];
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the size of first matrix in the format 'mxn' where m:no of rows and n:no of columns.");
    System.out.println("Enter the no of rows: ");
    int m1=sc.nextInt();
    System.out.println("Enter the no of column: ");
    int n1=sc.nextInt();
    input(a,m1,n1);


    int b[][]=new int[50][50];
    System.out.println("Enter the size of second matrix in similar format 'mxn' where m:no of rows and n:no of columns.");
    System.out.println("Enter the no of rows: ");
    int m2=sc.nextInt();
    System.out.println("Enter the no of column: ");
    int n2=sc.nextInt();
    input(b,m2,n2);

    System.out.println("First matrix.");
    output(a,m1,n1);
    System.out.println("Second matrix.");
    output(b,m2,n2);

    int c[][]=new int[50][50];
    if(m1==m2&&n1==n2){
    add(a,b,c,m1,n1);
    System.out.println("Added matrix.");
    output(c,m1,n1);}
    else 
    System.out.println("Addition is not possible");


    
    
    
    }
}
