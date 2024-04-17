#include<iostream>
using namespace std;

int main()
{
    double f;
    cout<<"Enter fahrenheit: ";
    cin>>f;
    double c=((f-32)*5)/9;
    cout<<"The celcius value is "<<c<<'\n';
    return 0;
}