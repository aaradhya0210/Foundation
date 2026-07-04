#include <iostream>
using namespace std;
int main ()
{
    int radius , diameter , circumference , area ;

    cout << "Enter the radius" << endl;
    cin >> radius;
    diameter = 2 * radius;
    circumference = 2 * 22/7 * radius;
    area = 22/7 * radius * radius;

    cout << "The following requirements are as follows = " << diameter  << endl;
    cout << "The following requirements are as follows = " << circumference   << endl;
    cout << "The following requirements are as follows = " <<  area  << endl;
    return 0;


}