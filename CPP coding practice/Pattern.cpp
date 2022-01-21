#include <iostream>
using namespace std;
void printPattern(int n)
{
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
            cout<<i<<endl;
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                cout<<i<<"*";
            }
            cout<<endl;
        }
    }
    for(int i=n;i>=1;i--)
    {
        if(i==1)
        {
            cout<<i<<endl;
        }
        else
        {
            for(int j=0;j<i;j++)
            {
                cout<<i<<"*";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int n;
    cout<<"enter a number: ";
    cin>>n;
    printPattern(n);
    return 0;
}

/*OUTPUT:
Enter a number: 4
1
2*2*
3*3*3*
4*4*4*4*
4*4*4*4*
3*3*3*
2*2*
1
*/