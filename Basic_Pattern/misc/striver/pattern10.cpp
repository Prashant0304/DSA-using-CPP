#include<iostream>
using namespace std;

void pattern10(int n)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    cin>>n;
    pattern10(n);
    return 0;
}