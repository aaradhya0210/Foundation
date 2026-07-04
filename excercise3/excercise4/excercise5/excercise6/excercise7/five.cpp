#include <iostream>
using namespace std;
int main ()
{
    int a , b , c ;
    cin >> a >> b >> c ;
    switch ( a + b + c == 180)
    {
        case 1:
        //case 0 :
        cout << "valid triangle" <<endl;
        break ;
       // case 1 :
       // cout << "invalid triangle "<< endl;
       // break;
       default :
       cout << "invalid triangle " <<endl;
        return 0;


    }

}