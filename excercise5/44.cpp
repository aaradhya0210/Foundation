#include <iostream>
using namespace std;
int main ()
{
    char ch;
    cout << "enter a character"<< endl;
    cin >> ch;

    if ((ch >= 'A' && ch <= 'Z') ||( ch >= 'a' && ch <= 'z' ))
    cout << "It is an alphabet"<<endl;
    else
    cout << "Not an alphabet" <<endl;
    return 0;
}