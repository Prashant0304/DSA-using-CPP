#include<iostream>
#include<cctype> // For toupper()
using namespace std;
int main() {
    char lower = 'a';
    char lower1='Z';
    char upper = toupper(lower);
    cout << "Uppercase: " << upper << endl; // Output: A
    char lower2=tolower(lower1);
    cout<< "Lowercase: "<<lower2<<endl;
    return 0;
}
