/*There is a jar full of candies for sale at a mall counter. The jar has the capacity N, that is JAR can contain
maximum N Candies when a JAR is full. At any point in time, JAR can have an M number of candies where M<=N.
Candies are served to the customers. JAR is never remaining empty as when the last K candidates are left, JAR 
is refilled with new candidates in such a way that JAR gets full. Write the code to implement the above 
scenario. Display JAR at the counter with the available number of candies.
Input should be the number of candies one customer orders at a point in time. Update the JAR after every purchase and display JAR at the counter. The output should give the number of candies sold and the updated number of candies in the JAR. If the input is more than the number of candies in JAR, return “INVALID INPUT”. 

Given,
N=10, Where N is the number of candies available, K<=5, Where K is the number of minimum candies that must be inside JAR ever.
Example1: (N=10,K=<5)

Input #1:
3

Output :
Number of Candies Sold: 3
Number of Candies available:7

Input #2:
4
*/
#include <iostream>
using namespace std;

void recordCandies(int c)
{
    int N=10, K;
    N=N-c;
    cout<<"\nNumber of Candies Sold: "<<c;
    cout<<"\nNumber of Candies available: "<<N;
     
    if(N<=5)
    {
        cout<<"\nFill the jar, stock of candies is low!";
        N=10;
        cout<<"\nJar filled full!";
        cout<<"\nNumber of Candies available: "<<N;
    } 
}
int main()
{
    int c;
    cout<<"Enter no. of candies customer wants: "<<endl;
    cin>>c;
    recordCandies(c);
    return 0;
}
/* Output:
Test Case 1: 
Enter no. of candies customer wants:
3

Number of Candies Sold: 3
Number of Candies available: 7

Test Case 2: 
Enter no. of candies customer wants:
4

Number of Candies Sold: 4
Number of Candies available: 6

Enter no. of candies customer wants:
6

Test Case 3: 
Number of Candies Sold: 6
Number of Candies available: 4
Fill the jar, stock of candies is low!
Jar filled full!

Test Case 4: 
checking whether the jar actually got filled full or not: 
Enter no. of candies customer wants:
7

Number of Candies Sold: 7
Number of Candies available: 3
Fill the jar, stock of candies is low!
Jar filled full!
Number of Candies available: 10
*/