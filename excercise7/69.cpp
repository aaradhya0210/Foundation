#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout << "Enter a number "<<endl;
    cin >> n;
     switch ( n % 5)
     {
        case 1:
        cout << "it is not  divisible by 5 " <<endl;
        break;
        
        default :
        cout << " it is divisible by 5 " << endl;
        return 0 ;
        

     }
}