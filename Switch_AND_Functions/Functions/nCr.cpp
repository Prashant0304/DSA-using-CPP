// Function with return type with return value
#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int nCr(int n, int r){
    int num=factorial(n);
    int den=factorial(r)*factorial(n-r);
    int nCr=num/den;
    return nCr;
}
int main(){
    int n,r;
    cout<<"Enter n and r value: ";
    cin>>n>>r;
    int ans=nCr(n,r);
    cout<<"Answer of nCr : "<<ans;
}