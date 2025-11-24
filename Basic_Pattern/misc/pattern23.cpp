#include<iostream>
using namespace std;
int main()
{
      int n=4;
      int i=1;
      while(i<=n)
      {
        int space=i-1;
        while(space)
        {
            cout<<" ";
            space--;
        }
        int count=n-i+1;
        while(count)
        {
            cout<<i;
            count--;
        }
        cout<<endl;
        i++;
      }
}