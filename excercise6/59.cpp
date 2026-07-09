#include <iostream>
using namespace std ;
int main ()
{
    int days ;
    cout << "Enter the late days " <<endl;

    cin >> days;
    if ( days <= 5)
    cout <<" the fine is 50 paise " <<endl;
    else if ( days <= 10)
    cout << "The fine is 1 rupee" <<endl;
    else if ( days <= 30)
    cout << " the fine is 5 rupees " <<endl;
    else 
    cout << " Membership cancelled " <<endl;
    return 0;

}