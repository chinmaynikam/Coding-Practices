/*
Q8:
Given an unsorted array of size N, use selection sort to sort 
arr[] in increasing order.


Example 1:

Input:
N = 5
arr[] = {4, 1, 3, 9, 7}
Output:
1 3 4 7 9
Explanation:
Maintain sorted (in bold) and unsorted subarrays.
Select 1. Array becomes 1 4 3 9 7.
Select 3. Array becomes 1 3 4 9 7.
Select 4. Array becomes 1 3 4 9 7.
Select 7. Array becomes 1 3 4 7 9.
Select 9. Array becomes 1 3 4 7 9.
Example 2:

Input:
N = 10
arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}
Output:
1 2 3 4 5 6 7 8 9 10

Your Task:  
You dont need to read input or print anything. Complete the 
functions select() and selectionSort() ,where select() takes 
arr[] and starting point of unsorted array i as input parameters 
and returns the selected element for each iteration in selection 
sort, and selectionSort() takes the array and it's size and sorts 
the array.
*/
#include<iostream>
using namespace std;
void selectionSort(int arr[], int size)                             //defining the selection sort function
{
    for(int i=0;i<size-1;i++)                                       //1st for loop for finding index of the smallest element and swapping the element with first element
    {
        int min_val=i;                                              //declaring the min_val as i initially
        for(int j=i+1;j<size;j++)                                   //second for loop for traversing thorugh array for finding smallest element
        {
            if(arr[j]<arr[min_val])                                 //checking the the element at jth position is smaller than min_val th
            {
                min_val=j;                                          //if above condition is true then setting min val as j
            }
        }
        int x=arr[i];                                               //after finding the index of the smallest element swap it with ith element
        arr[i]=arr[min_val];
        arr[min_val]=x;
    }
}
int main()
{
    int size;
    cout<<"Enter size of array: ";                                  //asking user the size of the array
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";                              //asking the user to enter the elements of the array
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];                                                //storing the elements
    }
    cout<<"Unsortd array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";                                          //displaying the unsorted array of elements
    }
    cout<<endl;
    selectionSort(arr,size);                                        //calling the selection sort function
    cout<<"Sortd array: ";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";                                          //displaying the sorted array of elements
    }
    return 0;
}
/*OUTPUT:
Test Case 1:
Enter size of array: 5
Enter elements of array: 4
1
3
9
7
1 3 4 7 9

Test Case 2:
Enter size of array: 10
Enter elements of array: 10
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

Test Case 3:
Enter size of array: 5
Enter elements of array: 5
4
3
2
1
Unsortd array: 5 4 3 2 1 
Sortd array: 1 2 3 4 5
*/