#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a and b value :";
    cin>>a>>b;
    cout<<"a AND b: "<<(a&b)<<endl;
    cout<<"a OR b: "<<(a|b)<<endl;
    cout<<"a NOT: "<<~a<<endl;
    cout<<"b NOT: "<<~b<<endl;
    cout<<"a XOR b: "<<(a^b)<<endl;
}