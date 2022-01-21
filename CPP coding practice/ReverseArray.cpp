#include <iostream>
using namespace std;
void printReverse(int n)
{
    int A[n];
    cout<<"\nEnter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=n-1;i>=0;i--)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int t,n;
    cout<<"Enter No. of Test Cases: ";
    cin>>t;
    cout<<"Enter size of array: ";
    cin>>n;
    for(int i=0;i<t;i++)
    {
        printReverse(n);
    }
    return 0;
}
/* Output:
Test Case 1:
Enter No. of Test Cases: 2
Enter size of array: 4

Enter elements of array: 1
2
3
4
4 3 2 1 
Enter elements of array: 4
3
2
1
1 2 3 4

Test Case 2:
Enter No. of Test Cases: 3
Enter size of array: 5

Enter elements of array: 1
2
3
4
5
5 4 3 2 1
Enter elements of array: 5
4
3
2
1
1 2 3 4 5
Enter elements of array: 2
4
6
8
10
10 8 6 4 2
*/