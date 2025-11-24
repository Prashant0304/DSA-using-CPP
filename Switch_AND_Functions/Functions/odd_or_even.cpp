#include<iostream>
using namespace std;

bool isEven(int a)
{
    if(a&1)
    {
        return 0;
    }
    return 1;
}

int main()
{
    int a;
    cout<<"Enter a value: ";
    cin>>a;
    if(isEven(a))
    cout<<"The number is Even ";
    else
    cout<<"The number is Odd ";
}