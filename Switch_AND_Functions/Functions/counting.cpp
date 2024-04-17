#include<iostream>
using namespace std;

int printCounting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<< i<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter n value : ";
    cin>>n;
    printCounting(n);
    return 0;
}