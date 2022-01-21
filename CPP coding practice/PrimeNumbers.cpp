#include <iostream>
using namespace std;
void Primenumbers(int n)
{
    int i,flag,m;
    for(i=0;i<=n;i++)
    {
        if(i==0 || i==1)
        {
            continue;
        }
        flag=1;
        for(int j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            cout<<i<<" ";
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the number till which you want to find prime numbers: ";
    cin>>n;
    cout<<"The Prime Numbers Till "<<n<<" are: "<<endl;
    Primenumbers(n);
    return 0;
}
/*OUTPUT
test case 1:
Enter the number till which you want to find prime numbers: 20
The Prime Numbers Till 20 are:
2 3 5 7 11 13 17 19 

test case 2:
Enter the number till which you want to find prime numbers: 30
The Prime Numbers Till 30 are:
2 3 5 7 11 13 17 19 23 29

test case 3:
Enter the number till which you want to find prime numbers: 100
The Prime Numbers Till 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
*/