#include <iostream> 
using namespace std ; 
void fibonacci  ( int n ){
    int a = 0 , b = 1 , c ;
    for ( int  i = 1 ; i > n ; i++){
    c = a + b ;
    a = b;
    b = c ; 
}
}
int main () {
    int n ; 
    cout << " Enter the number "<< endl ; 
    cin >> n ; 
     fibonacci(n);
    return 0 ; 
}
