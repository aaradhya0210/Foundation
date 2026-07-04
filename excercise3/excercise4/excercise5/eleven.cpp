#include <iostream>
using namespace std;

int main()
{
    int a , b , c;
    cin >> a >> b >> c ;
    if ( a == b && b ==c)
    cout << "equilateral triangle" <<endl;
    else if
     ( a==b || b==c || a==c)
     cout << "isocelses triangle " <<endl;
     else 
     cout << "scalene triangle " <<endl;
     return 0;

}