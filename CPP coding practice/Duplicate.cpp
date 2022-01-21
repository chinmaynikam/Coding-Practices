/* Given a sorted array A[] of size N,
delete all the elements from A[].
Example 1:
Input: 
N=5
Array ={2,2,2,2,2}
Output =2;

Example 2:
Input:
N=3
Array={1,2,2}
Output: 1 2
*/
#include <iostream>
using namespace std;
void removeDuplicate(int A[], int N)
{
    int temp[N], j=0;
    for(int i=0;i<N-1;i++)//i=3
    {
        if(A[i]!=A[i+1])//4!=5->True
        {
            temp[j]=A[i];//temp[1]=4
            //temp->2,4
            j++;//j=2
        }
    }
    temp[j++]=A[N-1];//j=3,temp[3]=5
    //temp->2,4,5
    for(int i=0;i<j;i++)//i=0
    {
        A[i]=temp[i];//A[0]=2
    }
    for(int i=0;i<j;i++)
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int N;
    cout<<"Enter size of array: ";
    cin>>N;
    int A[N];
    cout<<"Enter elements of array: ";
    for(int i=0;i<N;i++)
    {
        cin>>A[i];
    }
    removeDuplicate(A,N);
    return 0;
}
/*OUTPUT:
Test Case 1:
Enter size of array: 3
Enter elements of array: 1
2
2
1 2

Test Case 2:
Enter size of array: 4
Enter elements of array: 2
2
4
5
2 4 5


*/