import java.util.Scanner;

class CheckKeyword {
    public static void main(String[] args) {
        String str[]= {"break", "case", "continue", "default", "defer", "else", "far", "func", "goto", 
        "if", "map", "range", "return", "struct", "type", "var"};
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter a word to check: ");
        String input=sc.nextLine();
        int flag=0;
        for(int i=0; i<16;i++)
        {
            if(str[i].equals(input))
            {
                flag=1;
            }
        }
        if(flag==1)
        {
            System.out.println(input+" is a keyword.");
        }
        else{
            System.out.println(input+" is not a keyword.");
        }
        sc.close();
    }
}
/*output:
Test Case 1:
Enter a word to check: defer
defer is a keyword.

Test Case 2:
Enter a word to check: apple
apple is not a keyword.
*/