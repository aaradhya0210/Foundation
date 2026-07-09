#include <iostream>
using namespace std;
int main () {
    int num , original_number , digit , reverse = 0;
    cin >> num ;
    original_number = num ;

    while ( num !=0){
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    cout << "reverse is" << reverse << endl;
    if ( original_number == reverse )
    cout << " It is a palindrome " << endl;
    else 
    cout << " Not a palindrome " << endl;
    return 0 ;
}