#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter a number "<<endl;
    cin >> n;
     switch ( n % 5)
     {
        case 0:
        cout << "it is divisible by 5 " <<endl;
        break;
        
        default :
        cout << " Not divisible by 5 " << endl;
        return 0 ;
        

     }
}