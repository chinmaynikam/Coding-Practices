import java.util.Scanner;
/**
 * Tables
 */
public class Tables {
    public static void table(int n)
    {
        for(int i=1;i<=10;i++)
        {
            System.out.print(n*i+" ");
        }
    }
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        n=sc.nextInt();
        table(n);
        sc.close();
    }
}
/* OUTPUT:
Test Case 1:
9
9 18 27 36 45 54 63 72 81 90

Test Case 2:
13
13 26 39 52 65 78 91 104 117 130
*/