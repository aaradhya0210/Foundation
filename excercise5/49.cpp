#include <iostream>
using namespace std;

int main()
{
    int money;
    cout << "Enter total amount " <<endl;
    cin >> money;
    cout << " 500 notes = " << money / 500 << endl;
    money = money % 500;
    cout << " 100 notes = " << money / 100 << endl;
    money = money % 100;
    return 0;

}