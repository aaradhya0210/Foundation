#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            int j;

            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                    break;
            }

            if (j == i)
                cout << "These are all the prime factors: " << i << endl;
        }
        else
        {
            cout << "Nothing" << endl;
        }
    }

    return 0;
}