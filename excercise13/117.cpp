#include<iostream>
using namespace std ;
int main () {
    string s = "Banana";
    char ch = 'a';
    int count = 0;

    for ( int i = 0 ; s[i] != '\0' ; i++) {
        if (s[i] == ch)
        {
            count ++;
        }
    }
    cout << "Occurence" << count;
    return 0;


}