import java.util.Scanner;

public class Charges {
    static void calculateCharges(int item1[], String item2, int item3){
        int sum=0,max;
        for(int i=0;i<item3;i++)
        {
            if(item2.charAt(i)=='N')
            {
                item1[i]=item1[i]*(-1);
            }
            sum+=item1[i];
        }
        if(sum<0)
        {
            sum=sum*(-1);
        }
        max=sum*100;
        System.out.println("Total Charges= "+max);
    }    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in); 
        String item2; 
        int item3;
        System.out.println("Enter total count of charges: ");
        item3 = sc.nextInt();
        int item1[]=new int[item3];
        System.out.println("Enter magnitudes of all charges: ");
        for(int i=0;i<item3;i++)
        {
            item1[i]=sc.nextInt();
        }
        System.out.println("Enter state of all charges(For Eg; PNP or PPNPNPP, etc): ");
        item2=sc.next();
        calculateCharges(item1, item2, item3);
        sc.close();
    } 
}
/*
OUTPUT:
Test Case 1:
Enter total count of charges:
5
Enter magnitudes of all charges:
4
9
7
6
2
Enter state of all charges(For Eg; PNP or PPNPNPP, etc):
PNPPN
Total Charges= 600
*/
