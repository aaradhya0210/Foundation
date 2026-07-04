#include <iostream>
using namespace std;

int main() {
    float cp, sp;

    cout << "Enter Cost Price and Selling Price: ";
    cin >> cp >> sp;

    if (sp > cp)
        cout << "Profit = " << sp - cp;
    else
        cout << "Loss = " << cp - sp;

    return 0;
}