#include<iostream>
using namespace std;
int main()
{
    int a,b,op;
    cout<<"Enter a and b values:";
    cin>>a>>b;
    cout<<"What operation need to perform : ";
    cout<<"1.Addition/t 2.Subtraction/t 3.Multiplication/t 4.Division/n";
    cin>>op;
        switch(op)
        {
        case 1: cout<<"Addditin of "<<a <<" and "<<b <<" is : "<<a+b;
        break;
        case 2:cout<<"Subtraction of "<<a <<" and "<<b <<" is : "<<a-b;
        break;
        case 3:cout<<"Multiplication of "<<a <<" and "<<b <<" is : "<<a*b;
        break;
        case 4:cout<<"Division of "<<a <<" and "<<b <<" is : "<<a/b;
        break;
        default:cout<<"The operation is not chosen";
        break;
        }
}