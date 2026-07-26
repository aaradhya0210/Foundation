#include <iostream> 
using namespace std ; 
 int power ( int base , int exponent) {
    int n = 1 ;
    for ( int i = 1 ; i <= exponent ; i ++) {
        n = n * base; 

    }
    return n ;

 }
 int main () {
    int base , exponent ;
    cout << "Enter the base " << endl;
    cin >> base ;
    cout << " Enter the exponent " << endl;
    cin >> exponent ; 
    cout << power(base , exponent);
    return 0 ;
    
 }