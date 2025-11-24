#include<iostream>
using namespace std;
//1->Prime;
//0->Not Prime;
bool isPrime(int n)
{
    for(int i=2;i<n;i++){
        if(n%i==0)
        {
            return 0;
        }
        return 1;
    }    
}

int main()
{
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    if(isPrime(n))
    cout<<"The number is Prime number";
    else
    cout<<"The number is not Prime number";
}