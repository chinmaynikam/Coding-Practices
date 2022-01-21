/*Q6:Given an Integer N and a list arr. Sort the array using bubble 
sort algorithm.
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
complete the function bubblesort() which takes the array and it's 
size as input and sorts the array using bubble sort algorithm.*/
#include <iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter Size of Array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubblesort(a,n);
    return 0;
}
/*OUTPUT:
Test Case 1:
Enter Size of Array: 5
Enter elements: 4
1
3
9
7
1 3 4 7 9

Test Case 2:
Enter Size of Array: 10
Enter elements: 10
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