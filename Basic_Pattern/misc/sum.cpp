#include<iostream>
using namespace std;

int main()
{
    int i=2;
    int sum=0;
    int n;
    cin>>n;
    while(i<=n)
    {
        sum=sum+i;
        i+=2;
    }
    
    cout<<"sum of consecutive numbers is : "<<sum <<'\n';

}