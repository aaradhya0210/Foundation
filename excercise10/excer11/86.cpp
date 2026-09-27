#include<iostream>
using namespace std;
 int main () {
    int a[] = {1 , -1,2,-3 ,-4 , -5 , -6 ,-7 , 9 , 10};
    for (int i = 1 ; i < 10 ; i ++){
        if ( a[i] < 0 )
        cout << a[i] << "negative elemts are as follows "<<endl;
    }
    return 0; 
 }