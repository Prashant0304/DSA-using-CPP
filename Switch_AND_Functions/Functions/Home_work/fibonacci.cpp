#include<iostream>
using namespace std;

int fibbonacci(int n)
{
    int a=0,b=1;
    int nextNumber;
    for(int i=1;i<n;i++)
    {
        
        nextNumber=a+b;
        a=b;
        b=nextNumber;
    }
    return a;
}
int main()
{
    int num;
    cout<<"Enter number ";
    cin>>num;
    
    cout<<"The last value of fibonacci is = "<<fibbonacci(num);
}