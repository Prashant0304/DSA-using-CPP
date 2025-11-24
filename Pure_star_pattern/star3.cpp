#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int spa=i-1;
        while(spa)
        {
            cout<<" ";
            spa-=1;
        }
        int star=n-i+1;
        while(star)
        {
            cout<<"*";
            star-=1;
        }
        cout<<endl;
        i+=1;
    }
}