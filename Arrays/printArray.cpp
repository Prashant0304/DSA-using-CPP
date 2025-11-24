#include<iostream>
using namespace std;

void arrayValues(int arr[] ,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int number[100];
    fill_n(number,100,89);
    arrayValues(number,100);
    return 0;
}
