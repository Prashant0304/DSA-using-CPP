#include<iostream>
using namespace std;

int fact(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

// void nCr(int n,int r)
// {
   
//     int num=fact(n);
//     int deno=fact(r)*fact(n-r);
//     int ans=num/deno;
//     cout<< ans;
// }

int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout<<ans;
    // int r;
    //cin>>r;
    // nCr(n,r);
    return 0;
}