#include <iostream>
using namespace std;
void arithmetic(int a1, int a2, int n)
{
    int dif,t;
    dif=a2-a1;
    t=a1+(n-1)*dif;
    cout<<t;
}
int main()
{
    int a1,a2,n;
    cout<<"Enter first two terms of A.P. : ";
    cin>>a1>>a2;
    cout<<"\nEnter no. of terms: ";
    cin>>n;
    arithmetic(a1,a2,n);
    return 0;
}
/*OUTPUT: 
Test Case 1:
Enter first two terms of A.P. : 2 3

Enter no. of terms: 4
5

Test Case 2:
Enter first two terms of A.P. : 1 2

Enter no. of terms: 10
10

Test Case 3:
Enter first two terms of A.P. : 3 8

Enter no. of terms: 6
28
*/