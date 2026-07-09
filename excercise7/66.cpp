#include <iostream>
using namespace std;

int main()
{
    int cp, sp;

    cout << "Enter Cost Price: ";
    cin >> cp;

    cout << "Enter Selling Price: ";
    cin >> sp;

    switch (sp > cp)
    {
        case 1:
            cout << "Profit = " << sp - cp;
            break;

        default:
            switch (cp > sp)
            {
                case 1:
                    cout << "Loss = " << cp - sp;
                    break;

                default:
                    cout << "No Profit No Loss";
            }
    }

    return 0;
}