#include<iostream>
using namespace std;
int binarySearch(int arr[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=start+((end-start)/2);
    while(start<=end)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        else if (key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=start+((end-start)/2);
    }
    return -1;

}
int main()
{
    int arr[6]={14,16,18,20,22,34};
    int Index=binarySearch(arr,6,22);
    cout<<"The index value of 22 is "<<Index;
    return 0;
}