/* You are given a number N. You need to print the pattern for the given value of N.
for N=2 the pattern will be
2 2 1 1
2 1

for N=3 the pattern will be 
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1 
3 2 1*/
#include <iostream>
using namespace std;
void PrintPattern(int n)
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        for(int j=n;j>=1;j--)
        {
            for(int k=0;k<n-i;k++)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    PrintPattern(n);
    return 0;
}
/* 
Output:
Test Case 1:
Enter a number: 3
3 3 3 2 2 2 1 1 1
3 3 2 2 1 1
3 2 1

Test Case 2:
Enter a number: 2
2 2 1 1
2 1

Test Case 3:
Enter a number: 5
5 5 5 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 2 1 1 1 1 1
5 5 5 5 4 4 4 4 3 3 3 3 2 2 2 2 1 1 1 1
5 5 5 4 4 4 3 3 3 2 2 2 1 1 1
5 5 4 4 3 3 2 2 1 1
5 4 3 2 1

*/