#include <iostream>
using namespace std;

int main()
{
    int order, stock;
    char credit;

    cout << "Enter order quantity: ";
    cin >> order;

    cout << "Enter stock: ";
    cin >> stock;

    cout << "Is credit OK? (Y/N): ";
    cin >> credit;

    if (credit == 'N' || credit == 'n')
        cout << "Do not supply. Send intimation.";
    else if (order <= stock)
        cout << "Supply has requirement.";
    else
        cout << "Supply available stock and intimate balance later.";

    return 0;
}