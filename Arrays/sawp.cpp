#include<iostream>
using namespace std;
void swap(int arr[])
{
    int temp=arr[0];
    arr[0]=arr[1];
    arr[1]=temp;
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[2]={15,90};
    swap(arr);
    printArray(arr,2);
    return 0;
}