/*
Given an array Arr of N elements and a integer K. Your task is to 
return the position of first occurence of K in the given array.
Note: Position of first element is considered as 1.

Example 1:

Input:
N = 5, K = 16
Arr[] = {9, 7, 2, 16, 4}
Output: 4
Explanation: K = 16 is found in the
given array at position 4.
Example 2:

Input:
N = 7, K = 98
Arr[] = {1, 22, 57, 47, 34, 18, 66}
Output: -1
Explanation: K = 98 isn't found in
the given array.
Your Task:
Complete the function search() which takes an array arr, two 
integers n and k, as input parameters and returns an integer 
denoting the answer. Return -1 if the number is not found in 
array. You don't to print answer or take inputs.
*/
#include <iostream>
using namespace std;
void search(int arr[], int n, int k)
{
    int flag=1;
    for(int i=0;i<n;i++)
    {
        if(k==arr[i])
        {
            cout<<i+1;
            flag=0;
        }
    }
    if(flag==1)
    {
        cout<<"-1";
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    search(arr,n,k);
    return 0;
}
/*OUTPUT:
Test Case 1:
5 16
9
7
2
16
4
4

Test Case 2:
7 98
1
22
57
47
34
18
66
-1
*/