#include<iostream>
using namespace std;
int main()
{
    // int n;
    // cout<<"Enter n value: ";
    // cin>>n;
    // bool isPrime=1;
    // for(int i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //     isPrime=0;
    //     break;
    //     }
    // }
    // if(isPrime==0)
    //     cout<<n<<" is not prime";
    // else
    //     cout<<n<<" is prime number";

    int n;
    cout<<"Enter n value: ";
    cin>>n;  
    bool isPrime=1;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
        isPrime=0;
        break;
        }
    }
    if(isPrime==0)
        cout<<n<<":The number is not prime number";
    else
        cout<<n<<":The number is prime number";
}  