#include<iostream>
using namespace std;
int main()
{
    
    int a=3;
    cout<<a<<endl; // gives 2

    if(true)
    {
        int a=10;   // block level variable
        cout<<a<<endl;;
    }
    int b=1;
    cout<<b<<endl;

    // int b=3;
    int i=8;
    cout<<b<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<"Hi "<<endl;
    }

}