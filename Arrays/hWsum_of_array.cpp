#include<iostream>
using namespace std;

int getSum(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    return sum;
}
int main()
{
    int num[100];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"The sum of array value is: "<<getSum(num,size)<<endl;
    return 0;
}