#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n value: ";
    cin>>n;
    int i=1; 
    while(i<=n)
    {
        char ch='A'+n-i;
        int j=1;
        while(j<=i)
        {
            cout<<ch<<" ";
            ch+=1;
            j+=1;
        }
        cout<<endl;
        i+=1;
    }
}