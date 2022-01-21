/*Given a sorted array of size N and an integer K, find the position 
at which K is present in the array using binary search.


Example 1:

Input:
N = 5
arr[] = {1 2 3 4 5} 
K = 4
Output: 3
Explanation: 4 appears at index 3.

Example 2:

Input:
N = 5
arr[] = {11 22 33 44 55} 
K = 445
Output: -1
Explanation: 445 is not present.

Your Task:  
You dont need to read input or print anything. Complete the 
function binarysearch() which takes arr[], N and K as input 
parameters and returns the index of K in the array. If K is 
not present in the array, return -1.*/

#include <iostream>
using namespace std;
int binarysearch(int arr[], int r, int l, int k)
{
    if(r<=l)
    {
        int mid=(r+l)/2;
        if(k==arr[mid])
        {
            return mid;
        }
        else if(k<arr[mid])
        {
            return binarysearch(arr, r, mid-1, k);
        }
        else if(k>arr[mid])
        {
            return binarysearch(arr, mid+1, l, k);
        }
    }
    return -1;
}
int main()
{
    int n,k;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int ind=binarysearch(a, 0,n-1,k);
    if(ind==-1)
    {
        cout<<"-1";
    }
    else{
        cout<<ind;
    }
    return 0;
}
/*OUTPUT:
Test Case 1:
5
1
2
3
4
5
4
3

Test Case 2:
5
11
22
33
44
55
445
-1
*/