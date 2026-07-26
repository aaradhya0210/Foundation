#include <iostream>
using namespace std ;
void isEven (int n) {
    if ( n %2 == 0)
    cout << "It is even "<< n <<endl;
    else {
        cout<< "It is odd "<< n <<endl;
    }

}
int main () {
    int num ;
    cout << "Enter a number"<<endl;
    cin >> num ;
    isEven(num);
    return 0;

}
