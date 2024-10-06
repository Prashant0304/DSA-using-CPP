//Program to demonstrate sum of natural numbers using loop
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter number :";
    cin>>number;
    int i=1,sum=0;
    while(i<=number){
        sum=sum+i;
        i++;
    }
    cout<<"Sum of " <<number<< " natural number is :"<<sum<<endl;
    return 0;
}