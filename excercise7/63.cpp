#include <iostream> 
using namespace std;

int main()
{
    int a , b ;
    cout << "Enter the first number " <<endl;
    cin >> a;
    cout << " Enter the second number " <<endl;
    cin >> b;
     switch ( a > b )
     {
        case 1 :
        cout << "maxium " << a ;
        break;
        default :
        cout <<" maximun " << b ;
        return 0;
     }
     
}