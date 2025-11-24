#include<iostream>
using namespace std;

int factorial(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans=ans*i;
    }
    return ans;
}
int nCr(int n,int r){
    int numerator=factorial(n);
    int denomenator=factorial(n-r)*factorial(r);
    int nCr=numerator/denomenator;
    return nCr;
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Answer is "<<nCr(n,r)<<endl;
}