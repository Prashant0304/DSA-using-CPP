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
        int num=n-i+1;
        int count=1;
        count=count+i-1;
        while(num)
        {
            cout<<count;
            count++;
            num--;
        }
        cout<<'\n';
        i++;
    }
}