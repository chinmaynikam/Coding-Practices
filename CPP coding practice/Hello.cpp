#include <iostream>
using namespace std;
int main()
{
	int n;
    float m;
    cout << "Hello World" << endl;
    cout<<"Enter a number: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        m=i+n;
        cout<<m;
    }
	return 0;
}
//Output:
/*  g++ Hello.cpp
    a
    Hello World
    Enter a number: 5
    5
*/