import java.util.Scanner;

public class Pattern {
    static void printPattern(int n)
    {
        for(int i=1;i<=n;i++)
        {
            if( i==1 )
            {
                System.out.println(i);
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    System.out.print(i+"*");
                }
                System.out.println();
            }
        }
        for(int i=n;i>=1;i--)
        {
            if( i==1 )
            {
                System.out.println(i);
            }
            else
            {
                for(int j=0;j<i;j++)
                {
                    System.out.print(i+"*");
                }
                System.out.println();
            }
        }
    }
    public static void main(String[] args) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a number: ");
        n=sc.nextInt();
        printPattern(n);
        sc.close();
    }
}
/* 
OUTPUT: 
Test Case 1:
Enter a number:
4
1
2*2*
3*3*3*
4*4*4*4*
4*4*4*4*
3*3*3*
2*2*
1 

Test Case 2:
Enter a number:
7
1
2*2*
3*3*3*
4*4*4*4*
5*5*5*5*5*
6*6*6*6*6*6*
7*7*7*7*7*7*7*
7*7*7*7*7*7*7*
6*6*6*6*6*6*
5*5*5*5*5*
4*4*4*4*
3*3*3*
2*2*
1
*/
