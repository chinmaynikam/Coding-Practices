import java.util.Scanner;

public class TransposeMatrix {
    public static void transposeMatrix(int mat[][], int size)
    {
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                int temp=mat[i][j];
                mat[i][j]=mat[j][i];
                mat[j][i]=temp;
            }
        }
    }
    public static void main(String[] args) {
        int size;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the Matrix: ");
        size=sc.nextInt();
        int mat[][] = new int[size][size];
        System.out.println("Enter elements of Matrix: ");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                mat[i][j]=sc.nextInt();
            }
        }
        System.out.println("Matrix before transpose: ");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
        transposeMatrix(mat,size);
        System.out.println("Matrix after transpose: ");
        for(int i=0;i<size;i++)
        {
            for(int j=0;j<size;j++)
            {
                System.out.print(mat[i][j]+" ");
            }
            System.out.println();
        }
        sc.close();
    }
    
}
/*Output:
Test Case 1:
Enter the size of the Matrix: 2
Enter elements of Matrix:
4
3
2
1
Matrix before transpose:
4 3
2 1
Matrix after transpose:
4 2
3 1

Test Case 2:
Enter the size of the Matrix: 4
Enter elements of Matrix:
1
1
1
1
2
2
2
2
3
3
3
3
4
4
4
4
Matrix before transpose:
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
Matrix after transpose:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/