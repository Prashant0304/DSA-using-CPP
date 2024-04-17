// This is LEET_CODE problem solution (Qn No:1281)
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int product=1;
    int sum=0;
    while(n!=0)
    {
        int d=n%10;
        product=product*d;  //this will provide product of digits
        sum=sum+d;
        n=n/10;
    }
    cout<<product-sum;
}