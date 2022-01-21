#include <iostream>
using namespace std;
void jumpingNumber(int n){
    int a[n];
    for(int i=0;i<n/10;i++)
    {
        a[i]=((i+1)*10)-((i+1)-1);
        a[i+1]=((i+1)*10)+((i+1)+1);
    }
    cout<<a[];
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    jumpingNumber(n);
    return 0;
}
/* OUTPUT:
Test Case 1:


Test Case 2:

 */