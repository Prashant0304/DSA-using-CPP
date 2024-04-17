#include<iostream>
using namespace std;
int main()
{
    int n=4;
    int i=1,count=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            char ch='A'+count-1;
            cout<<ch<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}