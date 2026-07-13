#include <iostream>
using namespace std ;
int main () 
{
    int year;
    cout << "Enter the year " <<endl;
    cin >> year;
    switch ((year % 400== 0 || year % 4 == 0 && year %100 != 0))
    {
    case 1:
        cout<< "It is a leap year"<<endl;
        break;
    
    default:
    cout << "Not a leap year"<<endl;
        break;
    }
    return 0;
}