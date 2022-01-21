#include <iostream>
using namespace std;
#define n 5
void ascending(int a[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void decending(int a[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void highest(int a[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<a[0];
}
void lowest(int a[])
{    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    cout<<a[0];
}

int main()
{
    int a[n],ch;
    cout<<"Functions on array: \n1.Sort array in ascending order.\n2.Sort array in decending order.\n3.Find highest number among the array elements.\n4.Find lowest number among the array elements.";
    cout<<"\nEnter your choice: ";
    cin>>ch;
    cout<<"\nEnter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    switch(ch)
    {
        case 1: ascending(a);
                break;
        case 2: decending(a);
                break;
        case 3: highest(a);
                break;
        case 4: lowest(a);
                break;
        default: cout<<"\n*****INVALID CHOICE*****";
                 break;
    }
    return 0;
}
/* OUTPUT:
Functions on array:
1.Sort array in ascending order.
2.Sort array in decending order.
3.Find highest number among the array elements.
4.Find lowest number among the array elements.
Enter your choice: 3

Enter elements of array: 84
21
47
9
32
84

*/