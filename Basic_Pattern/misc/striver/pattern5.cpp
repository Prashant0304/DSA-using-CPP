#include<iostream>
using namespace std;

void pattern5(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*"<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    pattern5(n);
    return 0;
}