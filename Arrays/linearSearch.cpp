#include<iostream>
using namespace std;

bool linearsearch(int num[],int size,int key)
{
    for(int i=0;i<size;i++)
    { 
        if(num[i]==key)
        {
            return 1;
        }
        
    }
    return 0;
}

int main()
{
     int num[10]={2,4,6,8,9,12,-2,43,-8,-74};
    
    // int size;
    // cout<<"Enter size of arrray: ";
    // cin>>size; 
    // int num[15];
    // cout<<"Enter values of array: ";
    // for(int i=0;i<size;i++)
    // {
    //     cin>>num[i];
    // }
    int key;
    cout<<"Enter the element to search for : ";
    cin>>key;
    bool found=linearsearch(num,10,key);
    if(found)
    cout<<"The element is present"<<endl;
    else 
    cout<<"The element is absent"<<endl;

}