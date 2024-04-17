#include<iostream>
using namespace std;

int main()
{
    int i=1;int n=3  ;int count=1;
    while(i<=n)
    {
        int space=n-i+1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<'\n';
        i++;
    }
}