#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int i=1,c=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<c<<" ";
            c+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}