#include <iostream>
using namespace std;

int main () {
    int num , digit , product = 1;
    cin >> num;
    while ( num > 0) {
        digit = num % 10;
        product = product * digit;
        num = num / 10;


    }
cout << "Product is " << product << endl;
return 0;

}