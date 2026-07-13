#include <iostream> 
using namespace std ;
int main () {
    int hours ;
    float pay ;
    for ( int i = 1 ; i <=10 ; i++) {
        cout << "Enter the hours worked by emmployee" <<endl;
        cin >> hours ;
        if ( hours > 40)
        pay = (hours - 40) * 12 ;
        else 
        pay = 0;
        cout << "overtime pay is "<< pay <<endl;


    }
    return 0;
    
}