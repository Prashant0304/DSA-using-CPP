#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    cout<<"Print the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"Printing DONE"<<endl;
}

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
    printArray(third,15);
    //initialising all the locations with 0
    int fourth[10]={0};
    printArray(fourth,10);
    //initialising all the locations with 1 it is not possible with below line
    int fifth[10]={1};
    printArray(fifth,10);
    cout<<"Everthing is fine "<<endl;
    return 0;
}