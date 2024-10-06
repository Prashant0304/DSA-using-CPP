#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value ";
    cin>>n;
    for(int i=1;i<=n;i++){
        //int value=i;
        for(int j=0;j<i;j++){
            cout<<i+j<<" ";
            // value++;
        }
        cout<<endl;
    }
}