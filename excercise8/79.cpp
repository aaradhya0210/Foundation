#include <iostream> 
using namespace std ; 
int main () 
{
    int n , i = 1 , sum = 0 ;
    while ( i <= n )
    {
        sum = sum + i ;
        i++;
    }
    cout << "sum = "<< sum << endl;
    return 0 ;
    }
