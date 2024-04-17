#include<iostream>
using namespace std;

int binarySearch(int num[],int n,int key)
{
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while(start<=end)
    {
        if(key==num[mid])
        {
            return mid;
        }
        else if(key>num[mid]) //right side part 
        {
            start=mid+1;
        }
        else
        {
            end=mid-1; //left part array
        }
        mid=(start+end)/2;
    }
    return -1;//Not found
}

int main()
{
    int even[6]={2,4,6,8,12,18};
    int odd[5]={1,3,5,7,9};
    int evenIndex=binarySearch(even,6,18);
    int oddIndex=binarySearch(odd,5,5);
    cout<<"The evenIndex 18 value is at "<<evenIndex<<endl;
    cout<<"The evenIndex 5 value is at "<<oddIndex<<endl;
    return 0;
}