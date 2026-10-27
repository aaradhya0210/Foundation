#include<iostream>
using namespace std;
int main () {
    string s = "Aaradhya";
    int count = 0;
    for (int i = 0 ; s[i] != '\0' ; i++)
    {
        count ++ ;
    }
    cout << count<< endl;
    return 0;
}

