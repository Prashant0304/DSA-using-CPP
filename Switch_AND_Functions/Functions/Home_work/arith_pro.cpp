#include<iostream>
using namespace std;

//Arithmetic progresssion
int ar(int n)
{
    return ((3*n)+7);
}
int main()
{
    int n;
    cout<<"Enter n th term: ";
    cin>>n;
    cout<<"The n th term value is: "<<ar(n);
}