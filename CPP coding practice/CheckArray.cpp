/*Given an array arr[] of size N, check if it is sorted in 
non-decreasing order or not. 

Example 1:

Input:
N = 5
arr[] = {10, 20, 30, 40, 50}
Output: 1
Explanation: The given array is sorted.
Example 2:

Input:
N = 6
arr[] = {90, 80, 100, 70, 40, 30}
Output: 0
Explanation: The given array is not sorted.

Your Task:
You don't need to read input or print anything. Your task is 
to complete the function arraySortedOrNot() which takes the 
arr[] and N as input parameters and returns a boolean value 
(true if it is sorted otherwise false).*/
#include <iostream>
using namespace std;
void arraySortedOrNot(int a[], int n)
{
    int flag=1;
    for(int i=0;i<n-1;i++)//i=3
    {
        if(a[i]>a[i+1])//40>50->False
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<flag;
    }
    else
    {
        cout<<flag;
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    //cin>>a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    arraySortedOrNot(a,n);
    return 0;
}
/*OUTPUT:
Test Case 1:
Enter size of array: 5
Enter elements: 10
20
30
40
50
1

Test Case 2: 
Enter size of array: 6
Enter elements: 90
80
100
70
40
30
0

*/