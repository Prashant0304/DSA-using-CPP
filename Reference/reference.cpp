#include<iostream>
using namespace std;

int update1(int& a){
    cout<<a++;
}

int main(){
    int n=5;
    cout<<"Update variable: ";
    update1(n);
    cout<<endl<<"Update reference: ";
    update1(n);
    cout<<endl<<"Update reference: ";
    update1(n);
    return 0;
}
