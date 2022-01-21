/*Q5:
Given a binary array A[] of size N. The task is to 
arrange the array in increasing order.
Note: The binary array contains only 0  and 1.
 

Example 1:

Input: 
5
1 0 1 1 0

Output: 
0 0 1 1 1

Explanation: 
After arranging the elements in 
increasing order, elements will be as 
0 0 1 1 1.
Example 2:

Input:
10
1 0 1 1 1 1 1 0 0 0

Output: 
0 0 0 0 1 1 1 1 1 1

Explanation: 
After arranging the elements in 
increasing orde, elements will be 
0 0 0 0 1 1 1 1 1 1.

Your Task: This is a function problem. You only need to complete 
the function binSort() that takes the array A[] and it's size N 
as parameters and sorts the array. The printing is done 
automatically by the driver code.*/
#include <iostream>
using namespace std;
void binSort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
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
    cout<<"Enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    binSort(a,n);
    return 0;
}
/*OUTPUT:
Test Case 1:
Enter size of array: 5
Enter elements: 1
0
1
1
0
0 0 1 1 1

Test Case 2:
Enter size of array: 10
Enter elements: 1
0
1
1
1
1
1
0
0
0
0 0 0 0 1 1 1 1 1 1

*/