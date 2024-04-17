#include<iostream>
#include<cctype>
using namespace std;
 

int main()
{
    char a;
    cin>>a;
    if(a>'a' && a<='z')
    {
        cout<<"Lower case";
    } 
    else if(a>'A' && a<='Z')
    {
        cout<<"Upper case ";
    }
    else {
        cout<<"Number";
    }
}