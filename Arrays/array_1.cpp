#include<iostream>
using namespace std;
int main()
{
    int number[15];
    //accessing array values
    cout<<"Value at 14 index is : "<<number[14]<<endl;

    //initialising an array 
    int second[3]={5,7,11};

    //accessing an element
    cout<<"Value at 2 index "<<second[2]<<endl;

    int third[15]={2,7};
    int n=15;
    cout<<"Printing the array"<<endl;
    //print the array
    for(int i=0;i<n;i++)
    {
        cout<<third[i]<<" ";
    }
    //initialising all the locations with 0
    int fourth[10]={0};
    n=10;
    cout<<"Printing the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<fourth[i]<<" ";
    }
    //initialising all the locations with 1 it is not possible with below line
    int fifth[10]={1};
    n=10;
    cout<<"Printing the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<fifth[i]<<" ";
    }
    cout<<"Everthing is fine "<<endl;
    return 0;
}