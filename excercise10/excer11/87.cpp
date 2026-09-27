#include <iostream> 
using namespace std ;
int main () {
    int arr [] = { 1,2,3,4,5};
   // int sum = arr[0]+arr[1]+arr[2]+arr[3]+arr[4];
    int sum = 0;
    for ( int i = 0 ; i < 5 ; i ++){
        sum = sum + arr[i];

    }
    cout <<sum <<endl;

}