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
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space-=1;
        }
        int j=n-i+1;
        int count=1;
        count=count+i-1;
        while(j)
        {
            cout<<count;
            count+=1;
            j-=1;
        }
        cout<<endl;
        i++;
    }
}