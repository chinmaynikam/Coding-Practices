/* You are given an array A of size N. You need tp print elements of A in
alternate order(starting from index 0)
Example 1: 
N=4
A[]={1,2,3,4}
OUTPUT:
1 3 
*/
#include <iostream>
using namespace std;
void printAlternate(int n)
{
    int A[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<(n+1)/2;i++)
    {
        cout<<A[i*2]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    printAlternate(n);
    return 0;
}
/*Output: 
Test Case 1: 
Enter size of array: 4
Enter elements of array: 1
2
3
4
1 3

Test Case 2:
Enter size of array: 5
Enter elements of array: 1
2
3
4
5
1 3 5

Test Case 3:
Enter size of array: 7
Enter elements of array: 2
4
6
8
10
12
14
2 6 10 14

Tese Case 4:
Enter size of array: 10
Enter elements of array: 1
2
3
4
5
6
7
8
9
10
1 3 5 7 9

*/