#include <iostream>
using namespace std;

int main()
{
    int temp , f, c;
    cout << "Enter temp in f"<< endl;
    cin >> f;
    c = ( f - 32) * 5/9;
    cout << "temp in celsius is = " << c <<endl;
    return 0;
}