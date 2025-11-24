#include<iostream>
using namespace std;

void swalpAlternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1 < n)
        {
            swap(arr[i],arr[i+1]);
        }
    }
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
    int odd[5]={1,2,3,4,5};
    int even[8]={20,22,24,26,28,30,32,34,};

    cout<<"Original array is : ";
    printArray(odd,5);
    swalpAlternate(odd,5);
    cout<<"Swap Alternate array is : ";
    printArray(odd,5);

    cout<<"Original array is : ";
    printArray(even,8);
    swalpAlternate(even,8);
     cout<<"Swap Alternate array is : ";
    printArray(even,8);

    return 0;
}