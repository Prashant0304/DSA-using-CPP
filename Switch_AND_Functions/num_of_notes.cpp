#include<iostream>
using namespace std;
int main()
{
   int n,rs100,rs50,rs20,rs10,rs1;
   cout<<"Enter n value: ";
   cin>>n;
   switch(1)
   {
        case 1  : rs100=n/100;
                  n=n%100;
                  cout<<"The hundreds are : "<<rs100<<endl;

        case 2  : rs50=n/50;
                  n=n%50;
                  cout<<"The fifty are : "<<rs50<<endl;

        case 3  :rs20=n/20;
                n=n%20;
                cout<<"The twenty are : "<<rs20<<endl;

        case 4  :rs10=n/10;
                 n=n%10;
                 cout<<"The tens are : "<<rs10<<endl;

        case 5  :rs1=n/1;
                n=n%1;
                cout<<"The one are : "<<rs1<<endl;          
   }
   return 0;
}


