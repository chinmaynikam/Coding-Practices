import java.util.Scanner;

/* You are given an array A of size N. You need to print elements of A in
alternate order(starting from index 0)
Example 1: 
N=4
A[]={1,2,3,4}
OUTPUT:
1 3 
*/
public class Alternate {
    static Scanner sc = new Scanner(System.in);
    public static void printAlternate(int n)
    {
        int A[] = new int[n];
        System.out.println("Enter elements of array: ");
        for(int i=0;i<n;i++)
        {
            A[i]=sc.nextInt();
        }
        for(int i=0;i<(n+1)/2;i++)
        {
            System.out.print(A[i*2]+" ");
        }
    }
    public static void main(String[] args) {
        int N;
        System.out.println("Enter the size of array: ");
        N=sc.nextInt();
        printAlternate(N);
    }
    
}
/*Output:
Test Case 1:
Enter the size of array:
4
Enter elements of array:
1
2
3
4
1 3

Test Case 2:
Enter the size of array:
10
Enter elements of array:
1
2
3
4
5
6
7
8
9
10
1 3 5 7 9

Test Case 3:
Enter the size of array:
7
Enter elements of array:
2
4
6
8
10
12
14
2 6 10 14
*/