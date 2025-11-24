#include<iostream>
using namespace std;

int main()
{
    int n=5;int i=1;
    while(i<=n)
    {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int star=n-i+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        cout<<'\n';
        i++;
    }
}