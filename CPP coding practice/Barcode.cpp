#include <iostream>
using namespace std;
void barCode(int n)
{
    int min=n%10;
    n/=10;
    while(n!=0)
    {
        if( min > n%10 )
        {
            min=n%10;
        }
        n/=10;
    }
    cout<<min;
}
int main()
{
    int n;
    cin>>n;
    barCode(n);
    return 0;
}
/*OUTPUT:
Test Case 1:
345627
2

Test Case 2;
8754963
3

*/