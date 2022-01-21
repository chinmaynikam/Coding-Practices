#include<iostream>
#include<string>
using namespace std;
void calculateCharge(int charges[], string charge_order, int count)
{
    int sum=0,max=0;
    for(int i=0;i<count;i++)
    {
        if(charge_order[i]=='N')                                //Checking the status of charge
        {
            charges[i]=(-1)*charges[i];                         //if negative, then multiplying thr magnitude by -1 
        }
        sum+=charges[i];                                        //summing up all charges
    }
    if(sum<0)                                                   //checking if sum is minus or plus 
    {
        sum=sum*(-1);                                           //if minus, then multiplying thr magnitude by -1
    }
    max=sum*100;                                                //calculating the total charge
    cout<<"Total charge= "<<max;                                //displaying total charge
}
int main()
{
    int charges[]={6,7,5,2,8};                                  //array of magnitudes of charges 
    string charge_order="PPNPN";                                //string for status og charge
    int count=5;                                                //total count of charges
    calculateCharge(charges, charge_order, count);              //calling the function to calculate total charge
    return 0;
}
/*
OUTPUT:
Test Case 1:
Total charge= 600

Test Case 2:
Total charge= 100

Test Case 3:
Total charge= 200
*/