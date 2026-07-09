#include <iostream>
using namespace std;

int main()
{
    char ch ;
    cout << "Enter the character"<<endl;
    cin >> ch;
    if ( ch >= 'A' && ch <= 'Z')
    cout <<"Capital letter"<<endl;
    else if 
    ( ch >= 'a' && ch <= 'z')
    cout << "Small letter"<<endl;
    else if 
    ( ch >= '0' && ch <= '9')
    cout << "digits"<<endl;
    else
    cout <<"Special character"<<endl;
    return 0;
}