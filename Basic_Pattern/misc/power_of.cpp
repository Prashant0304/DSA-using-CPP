#include<iostream>
using namespace std;
int main()
{
    int a,b,ans=1;
    cout<<"Enter a and b value : ";
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    cout<<"The power of a b is : "<<ans<<endl;
}