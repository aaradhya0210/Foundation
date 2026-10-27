#include<iostream>
using namespace std;
int main () {
    string s = "Aaradhya" ;
    int count = 0;

    for ( int i = 0; i < s[i]!= '\0' ; i++){
        if ( s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            count ++;
        }
    }
    return 0;
}