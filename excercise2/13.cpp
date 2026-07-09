#include <iostream>
using namespace std;

int main()
{
    int days , years , weeks ;
    cout << "Enter number of days ";
    cin >> days;
    
    years = days/ 365;
    days = days % 365;
    weeks = days / 7 ;
    days = days % 7;
    cout << "Years =" << years<< endl;
    cout << "weeks =" <<weeks<<endl;
    cout << "days =" <<days<<endl;
    return 0;



}