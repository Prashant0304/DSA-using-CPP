#include <iostream>
 using namespace std;
int main(){
    int number[10];
    fill_n(number,10,25);

    for(int i = 0 ; i <= 10 ; i++){
        cout<<number[i]<<" ";
    }
   
} 