#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout  << "Enter an alphabet"<<endl;
    cin >> ch;

    if ( ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    cout << "Vowel"<<endl;
    else
    cout << "constonant"<<endl;
    return 0;
}