#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<'\n';
        i++;
    }
}