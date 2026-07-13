#include <iostream>
using namespace std ;
 int main  () {
    int a , b , hcf;
    cin >> a;
    cin >> b ;
    for ( int i = 1 ; i <= a && i <=b; i++) {
        if ( a % i == 0 && b % i == 0)
        hcf = i;

    }
    cout << hcf << " It is the HCF"<<endl;
    return 0;
 }