#include <iostream>
using namespace std;
int main() {
    int angle1, angle2 , angle3;

    cout << "Enter angle 1"<<endl;
    cin >> angle1;

    cout << "Enter angle 2"<<endl;
    cin >> angle2;
    
    angle3 = 180 - ( angle1 + angle2);
    cout << "The third angle is = " << angle3 <<endl;
    return 0;
}