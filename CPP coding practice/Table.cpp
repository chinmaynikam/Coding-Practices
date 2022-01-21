/* Print the multiplication table of a given number N
Example 1:
Input:
N=9

Output:
9 18 27 36 45 54 63 72 81 90
*/
#include <iostream>

using namespace std;

void Table(int n)
{
    for(int i=1;i<=10;i++)
    {
        cout<<n*i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    Table(n);
    return 0;
}
/* OUTPUT:
Test Case 1:
9
9 18 27 36 45 54 63 72 81 90

Test Case 2:
13
13 26 39 52 65 78 91 104 117 130
*/