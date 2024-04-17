#include<iostream>
using namespace std;
void reverseArry(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;end--;
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[5]={3,2,1,5,4};
    reverseArry(arr,5);
    printArray(arr,5);
    return 0;
}