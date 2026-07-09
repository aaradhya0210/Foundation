#include <iostream>
using namespace std;

int main()
{
    int a , b , c;
    cout << "Enter three numbers"<<endl;
    cin >> a >> b >> c;

    if ( a >= b && a >= c)
    cout << "max is  = " << a;
    else if ( b>= a && b >= c )
    cout << "max is = " << b;
    else
    cout << "max is = " << c;
    return 0;


}