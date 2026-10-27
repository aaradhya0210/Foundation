#include<iostream>
using namespace std;
int main () {
    string s = " Hello";
    string copy = " ";

    for ( int i = 0; s[i] != '\0' ;i++)
    {
        copy = copy + s[i];
    }
    cout << copy;
    return 0;

}