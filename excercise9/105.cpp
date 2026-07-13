#include <iostream>
using namespace std ;
int main ()
{
    int i , n, remainder , sum ;
    for ( i = 1 ; i <= 500 ; i++){
        n = i;
        sum = 0;
        while ( n > 0){
            remainder = n % 10;
            sum = sum + remainder * remainder * remainder ;
            n = n / 10;
        }
        if ( sum == i )
        cout << " The armstrong numbers are " << i << endl;


        }
        return 0;

    }
