/*Q7:
The task is to complete the insert() function which is used to 
implement Insertion Sort.


Example 1:

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Example 2:

Input:
N = 10
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output:
1 2 3 4 5 6 7 8 9 10

Your Task: 
You don't have to read input or print anything. Your task is to 
complete the function insert() and insertionSort() where insert() 
takes the array, it's size and an index i and insertionSort() uses 
insert function to sort the array in ascending order using insertion 
sort algorithm. */
#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i,j,k;
    for(int i=1;i<n;i++)//when i=3
    {
        k=arr[i];//k=arr[3]->k=9
        j=i-1;//j=2
        while(j>=0 && arr[j]>k)//2>=0 && 3>9->False
        {
            arr[j+1]=arr[j];//arr[1]=arr[0]->arr[1]=4
            j=j-1;//j=0-1=-1
        }
        arr[j+1]=k;//arr[3]=9
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertionSort(a,n);
    return 0;
}
/*OUTPUT:
Test Case 1: 
Enter size of the array: 5
Enter Elements: 4
1
3
9
7
1 3 4 7 9

Test Case 2:
Enter size of the array: 10
Enter Elements: 10
9
8
7
6
5
4
3
2
1
1 2 3 4 5 6 7 8 9 10
*/