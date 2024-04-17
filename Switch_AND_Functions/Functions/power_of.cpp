// #include<iostream>
// using namespace std;
// int main()

// {
//     int a,b;
//     int ans=1;
//     cin>>a>>b;
//     for(int i=1;i<=b;i++)
//     {
//         ans=ans*a;
//     }
//     cout<<"The answer is : "<<ans;
// }

// above code is without using function


//below cde is using function

#include<iostream>
using namespace std;
int power()
{

    int ans=1;
    int a,b;
    cout<<"Enter a and b value";
    cin>>a>>b;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;
    }
    return ans;
}
int main()
{
    // int a,b;
    // cout<<"Enter a and b value";
    // cin>>a>>b;
    int ans = power();
    cout<<" The answer is: "<<ans;
    cout<<endl;
    int s=power();
    cout<<" The answer is: "<<s;
    return 0;
}