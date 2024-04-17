//decimal to binary conversion
#include<iostream>

#include<math.h>
using namespace std;
int main(){
    int n,rem,bin=0,prod=1;
    cout<<"enter value of n: ";
    cin>>n;
    while(n!=0){
        rem=n%2;
        bin=bin+(prod*rem);
        n=n/2;
        prod=prod*10;
    }
    cout<<bin<<endl;
return 0;
}
