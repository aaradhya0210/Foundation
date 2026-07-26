#include <iostream> 
using namespace std ;
int factorialofnumber  (int n) {
    int factorial = 1 ;
    for ( int i = 1 ; i <=n ; i++){
        factorial = factorial * i ;
    } 
    return factorial ;
}
    int main () {
        int ans = factorialofnumber( 5);
        cout << ans << endl;
        return 0;
    } 