
import java.util.Scanner;

public class CheckArray {
    static void checkarray(int a[],int n)
    {
        int flag=1;
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            System.out.println(flag);
        }
        else{
            System.out.println(flag);
        }
    }    
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n;
        System.out.println("Enter Size of Array: ");
        n=sc.nextInt();
        int[] a=new int[n];
        System.out.println("Enter Elements: ");
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        checkarray(a, n);
        sc.close();
    }
}
/*OUTPUT:
Test Case 1:
Enter Size of Array:
5
Enter Elements:
10
20
30
40
50
1

Test Case 2:
Enter Size of Array:
6
Enter Elements:
8
9
15
7
24
6
0

*/