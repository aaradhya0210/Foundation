#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cout << "Enter marks in A: ";
    cin >> A;

    cout << "Enter marks in B: ";
    cin >> B;

    if (A >= 55 && B >= 45)
        cout << "Pass";
    else if (A >= 45 && A < 55 && B >= 55)
        cout << "Pass";
    else if (A >= 65 && B < 45)
        cout << "Reappear in B";
    else
        cout << "Fail";

    return 0;
}