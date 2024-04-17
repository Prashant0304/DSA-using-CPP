#include <iostream>
 using namespace std;
 int main()
 {
   int ar[10];
   fill_n(ar,10,-24);
   for (int i = 0; i <= 10; i++)
   {
     cout << ar[i] << " ";
   }
  }