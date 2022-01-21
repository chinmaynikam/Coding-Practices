import java.util.Scanner;

public class Sales {
    static void sumOfSales(int n)
    {
        int salesValue[]=new int[n];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter sales of each products: ");
        for(int i=0;i<n;i++)
        {
            salesValue[i]=sc.nextInt();
        }
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(salesValue[i]<salesValue[j])
                {
                    int x=salesValue[i];
                    salesValue[i]=salesValue[j];
                    salesValue[j]=x;
                }
            }
        }
        int sum=salesValue[0]+salesValue[1];
        System.out.println("Sum of two highest sales are: "+sum);
        sc.close();
    }
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter No. of Products: ");
        n=sc.nextInt();
        sumOfSales(n);
        sc.close();
    }
}
/*Output:
Test Case 1:
Enter No. of Products:
5
Enter sales of each products:
15
26
45
7
10
Sum of two highest sales are: 71

Test Case 2:
Enter No. of Products:
6
Enter sales of each products:
2
56
12
23
56
8
Sum of two highest sales are: 112
*/