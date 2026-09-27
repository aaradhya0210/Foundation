#include<iostream>
using namespace std ;
int main () {
    int arr[] = { 10, 12 , 13, 23 , -5 , -8 ,-9 }; 
    int count = 0;
    for ( int i = 0 ; i < 7 ; i++){
        if (arr[i]< 0 )
        {
            count ++ ;

        }
    }
    cout << "negative numbers are as follows "<<count << endl;

}