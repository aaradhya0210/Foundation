#include <iostream>
using namespace std;

int main()
{
    float base, height, area;

    cout << "Enter base: ";
    cin >> base;

    cout << "Enter height: ";
    cin >> height;

    area = 0.5 * base * height;

    cout << "The area is  = " << area<<endl;
    return 0;
}