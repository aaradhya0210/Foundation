#include <iostream> 
using namespace std;
int main ()
{
    int n , a , max , min ;
    cout <<"Enter how many numbers"<<endl;
    cin >> n ;
    cin >> a ;
    max = a;
    min = a ;
    for ( int i = 1 ; i < n ; i++){
        cin >> a ;
        if ( a > max)
        max = a;
        if ( a < min)
        min = a ;

    }
    cout << "Range " << max - min ;
    return 0;

}