#include <iostream>
using namespace std;

int main() 
{
    float length , centimeter , meter , kilometer ;
    cout << "Enter length in centimeter" << endl;
    cin >> length;
    meter = length * 100;
    kilometer = length / 1000;
    cout << "Meter me " << meter << endl;
    cout << "Kilometer me "<< kilometer << endl;
    return 0;

}