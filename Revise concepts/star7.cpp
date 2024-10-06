#include<iostream>
using namespace std;
int n;
void pattern(){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i+j-2;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
void patter1(){
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}

int main(){
    cout<<"Enter n value : ";
    cin>>n;
    int i=1;
    int count=i;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+count-1;
            cout<<ch<<" ";
            count++;
            j++; 
        }
        cout<<"\n";
        i++;
    }
    cout<<"Here main pattern exit";
    cout<<endl;
    pattern();
    cout<<endl;
    cout<<"Here first pattern exit";
    cout<<endl;
    patter1();
    cout<<endl;
    cout<<"Here second pattern exit";
    return 0;
}