#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n value : ";
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //1st triangle
        int num=n-i+1;
        int count=1;
        while(num)
        {
            cout<<count<<" ";
            count++;
            num--;
        }

        //2nd triangle
        int star=i-1;
        while(star)
        {
            cout<<"* *"<<" ";
            star--;
        }


        //3rd triangle  
        int number=n-i+1;
        while(number)
        {
            cout<<number<<" ";
            number--;
        }
        cout<<endl;
        i++;
    }
}