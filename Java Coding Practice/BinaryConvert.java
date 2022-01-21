import java.util.Scanner;

public class BinaryConvert {
    public static void main(String[] args) {
        //declaring necessary variables
        int digitnumber,total;
        int i;
        Scanner sc=new Scanner(System.in);//declaring scanner
        System.out.println("How many numbers you want to enter: ");
        total=sc.nextInt();//getting total count of number, user wants to enter
        int binarynumber[] = new int[10];//declaring binary number array
        for(int k=0;k<total;k++)
        {
            //taking digit number as input
            System.out.println("\nEnter digit number: ");
            digitnumber=sc.nextInt();

            //finding each binary digit of binary number and storing it in the array
            for(i=0;digitnumber>0;i++)
            {
                binarynumber[i]=digitnumber%2;
                digitnumber=digitnumber/2;
            }

            //printing the converted binary number
            for(i=i-1;i>=0;i--)
            {
                System.out.print(binarynumber[i]);
            }
        }
        sc.close();//closing scanner
    }
}
/*Output:
Test Case 1:
How many numbers you want to enter:
4
Enter digit number:
4
100 
Enter digit number:
5
101
Enter digit number:
12
1100
Enter digit number:
15
1111

Test Case 2:
How many numbers you want to enter:
3

Enter digit number:
24
11000
Enter digit number:
30
11110
Enter digit number:
27
11011
*/