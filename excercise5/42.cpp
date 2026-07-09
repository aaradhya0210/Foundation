#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number "<<endl;
    cin >> num;
    if (num > 0)
    cout << "The number is positive "<<endl;
    else if (num < 0)
    cout << "the number is negative"<<endl;
    else 
    cout << "Zero";

    return 0;

}