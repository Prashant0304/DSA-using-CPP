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
        int space=n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<j;
            j++;
        }
        int star=i-1;
        while(star)
        {
            cout<<star;
            star--;
        }
        cout<<endl;
        i++;
    }
}