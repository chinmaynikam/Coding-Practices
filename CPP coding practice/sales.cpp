#include <iostream>
using namespace std;
void findSales(int n)
{
    int salesValue[n];
    cout<<"\nEnter sales of the products: ";
    for(int i=0;i<n;i++)
    {
        cin>>salesValue[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(salesValue[i]<salesValue[j])
            {
                int x=salesValue[i];
                salesValue[i]=salesValue[j];
                salesValue[j]=x;
            }
        }
    } 
    cout<<salesValue[0]+salesValue[1];
}
int main()
{
    int n;
    cout<<"Enter number of products: ";
    cin>>n;
    findSales(n);
    return 0;
}
/* OUTPUT:
Test Case 1:
Enter number of products: 5

Enter sales of the products: 15
26
45
7
10
71

Test Case 2:
Enter number of products: 6

Enter sales of the products: 2
56
12
23
56
8
112

*/