import java.util.Scanner;

public class SelectionSort {
    public void selectionSort(int arr[], int n){
        int mini;
        for(int i=0;i<n-1;i++)
        {
            mini=i;
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]<arr[mini])
                {
                    mini=j;
                }
            }
            int temp=arr[i];
            arr[i]=arr[mini];
            arr[mini]=temp;
        }
    }
    public static void main(String[] args) {
        int size;
        Scanner sc =new Scanner(System.in);
        System.out.print("Enter size of array: ");
        size=sc.nextInt();
        int arr[] = new int[size];
        System.out.print("Enter Elements of array: ");
        for(int i=0;i<size;i++)
        {
            arr[i]=sc.nextInt();
        }
        System.out.println("Array before sorting: ");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
        SelectionSort sort=new SelectionSort();
        sort.selectionSort(arr, size);
        System.out.println("Array after sorting: ");
        for(int i=0;i<size;i++)
        {
            System.out.print(arr[i]+" ");
        }
        sc.close();
    }
}
/*Output:
Test Case 1:
Enter size of array: 5
Enter Elements of array: 4
1
3
9
7
Array before sorting:
4 1 3 9 7
Array after sorting:
1 3 4 7 9

Test Case 2:
Enter size of array: 10
Enter Elements of array: 10
9
8
7
6
5
4
3
2
1
Array before sorting:
10 9 8 7 6 5 4 3 2 1
Array after sorting:
1 2 3 4 5 6 7 8 9 10
*/