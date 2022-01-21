import java.util.Scanner;

class Arithmatic
{
    static void APSeries(int a1, int a2, int n)
    {
        int t,d;
        d=a2-a1;
        t=a1+(n-1)*d;
        System.out.println(t);
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a,b,n;
        System.out.println("Enter First two terms of AP Sereis: ");
        a=sc.nextInt();
        b=sc.nextInt();
        System.out.println("Enter positin of the number you want to find: ");
        n=sc.nextInt();
        APSeries(a, b, n);
        sc.close();
    }
}
/*OUTPUT:
Enter First two terms of AP Sereis:
2 3
Enter positin of the number you want to find:
4
5

Enter First two terms of AP Sereis:
12 24
Enter positin of the number you want to find:
6
72
*/