#include <iostream> 
using namespace std;
int main () {
    int n , temp , digit , sum =0;
    cin >> n ;
    temp = n;
    while ( temp > 0 ) {
        digit = temp % 10;
        sum = sum + ( digit * digit * digit );
        temp = temp / 10;

    }
    if ( sum == n )
    cout << "Armstrong ";
    else 
    cout << " Not armstrong";
    return 0;
}
