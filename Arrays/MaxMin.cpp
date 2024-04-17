#include<iostream>
#include<limits.h>
using namespace std;

int getMin(int num[],int n)
{
    int min=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
        
    }
    return min;
}

int getMax(int num[],int n)
{
    int maxi=INT_MIN;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,num[i]);
        // if(num[i]>max)
        // {
        //     max=num[i];
        // }
        
    }
    return maxi;
}
int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }

    cout<<"The maximum value is : "<<getMax(num,size)<<endl;
    cout<<"The minimum value is : "<<getMin(num,size);
}