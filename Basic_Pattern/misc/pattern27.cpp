#include<iostream>
using namespace std;

int main()
{
    int i=1;int n=5;
    while(i<=n)
    {
        int num=n-i+1,count=1;
        while(num)
        {
            cout<<count;
            count++;
            num--;
        }
        int star=i-1;
        while(star)
        {
            cout<<"**";
            star--;
        }
        int number=n-i+1;
        while(number)
        {
            cout<<number;
            number--;
        }
        cout<<endl;
        i++;
    }
}