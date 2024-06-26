#include<iostream>
using namespace std;

int peakIndexInMountain(int arr[],int n)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid =s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[5]={3,6,7,10,1};
    cout<<"The peak index value in an given array : "<<peakIndexInMountain(arr,5)<<endl;
}