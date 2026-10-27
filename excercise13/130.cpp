#include<iostream>
using namespace std;
int main () {
    string s = "madam";
    string rev = " ";
    for ( int i = s.size() -1 ; i >= 0; i --)
    {
        rev = rev +s[i];
    }
    if ( s == rev )
    cout <<"palindrome"<<endl;
    else 
    cout << "Not palindrome" << endl;
    return 0;

}