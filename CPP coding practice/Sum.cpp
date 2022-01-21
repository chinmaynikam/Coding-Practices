/* Given a number N. Find if the digit sum(or sum of digits) of N is a
Pallindrome number or not. Note: A Plaindrome number is a number which 
stays same when reversed.
Example 1:
input:
N=56

Output:
1
 The sum of digits is 5+6=11. 11 is pallindrome so o/p is 1 */
#include <iostream>
using namespace std;
void isSumofDigitPallindrome(int n)
{
    int sum=0,sum2=0,t,temp;
    while(n>0)
    {
        sum=sum+(n%10);
        //x=n%10;       by these steps you 
        //n=n/10;       can get every digit 
        //cout<<x<<" "; of the given number.
        n=n/10;
    }
    t=sum;
    while(t>0)
    {
        sum2=sum2*10+(t%10);
        t=t/10;
    }
    if(sum==sum2)
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    isSumofDigitPallindrome(n);
    return 0;
}
/* OUTPUT:
Test Case 1:
Enter a number: 56
1

Test Case 2:
Enter a number: 98
0

Test Case 3:
Enter a number: 5785
0
*/