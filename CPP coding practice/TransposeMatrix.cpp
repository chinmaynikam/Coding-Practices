/*
Q9:
Write a program to find the transpose of a square matrix of size N*N. 
Transpose of a matrix is obtained by changing rows to columns and 
columns to rows.

Example 1:

Input:
N = 4
mat[][] = {{1, 1, 1, 1},
           {2, 2, 2, 2}
           {3, 3, 3, 3}
           {4, 4, 4, 4}}
Output: 
{{1, 2, 3, 4},  
 {1, 2, 3, 4}  
 {1, 2, 3, 4}
 {1, 2, 3, 4}} 
Example 2:

Input:
N = 2
mat[][] = {{1, 2},
           {-9, -2}}
Output:
{{1, -9}, 
 {2, -2}}

Your Task:
You dont need to read input or print anything. Complete the function 
transpose() which takes matrix[][] and N as input parameter and finds 
the transpose of the input matrix. You need to do this in-place. That 
is you need to update the original matrix with the transpose.
*/
#include<iostream>
using namespace std;
#define N 10
void transposeMatrix( int n, int mat[][N] )             //declaring and defining the the tranpose function with i/p parameters
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp=mat[i][j];                         //Swapping the elements of the m,atrix to find transpose
            mat[i][j]=mat[j][i];
            mat[j][i]=temp;
        }
    }
    for(int i=0;i<n;i++)                                //displaying the matrix after finding transpose
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter size of matrix: ";                     //Asking user for the size/dimensions of matrix
    cin>>n;
    int mat[N][N];                                      //defining matrix array of size N
    cout<<"Enter elements of matrix: ";                 //asking users to enter elements of the matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>mat[i][j];                             //storing the i/p in matrix
        }
    }
    cout<<"Matrix before tranpose: ";                   //displaying matrix before transpose 
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matrix after tranpose: ";                    //displaying matrix after transpose
    cout<<endl;
    transposeMatrix(n, mat);                            //finding the transpose of the user entered matrix 
                                                        //by calling the function

    return 0;
}
/*Output:
Test Case 1:
Enter size of matrix: 2
Enter elements of matrix: 1
2
3
4
1 3
2 4

Test Case 2:
Enter size of matrix: 2
Enter elements of matrix: 1
2
-9
-2
Matrix before tranpose: 1 2
-9 -2
Matrix after tranpose: 1 -9
2 -2

Test Case 3:
Enter size of matrix: 4
Enter elements of matrix: 1
1
1
1
2
2
2
2
3
3
3
3
4
4
4
4
Matrix before tranpose:
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
Matrix after tranpose:
1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4
*/
