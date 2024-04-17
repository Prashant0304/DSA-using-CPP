#include<iostream>
using namespace std;

int firstOcc(int arr[],int n,int key)
{
    int s=0,e=n-1,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOcc(int arr[],int n,int key)
{
    int s=0,e=n-1,ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e)
    {
        if(key==arr[mid])
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}



int main()
{
    int even[8]={1,2,2,2,3,4,5,6};
    int value=lastOcc(even,8,2)-firstOcc(even,8,2)+1;
    cout<<"The total occurance of 2 is : "<<value;
    return 0;
}