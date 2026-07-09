#include <iostream>
using namespace std;

int main()
{
    int n, i = 2, sum = 0;

    cout << "Enter n: ";
    cin >> n;

    while (i <= n)
    {
        sum = sum + i;
        i = i + 2;
    }

    cout << "Sum = " << sum;

    return 0;
}