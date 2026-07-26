#include <iostream> 
using namespace std ; 

int countdigits ( int n ){
    int count = 0 ;
    while ( n > 0 ) {
        count ++ ;
        n = n / 10 ;
    }
    return count ; 
}
int main () {
    int n ; 
    cout << " ENter the number " << endl;
    cin >> n ;
    cout << countdigits(n);
    return 0;
}