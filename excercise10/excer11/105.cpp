#include <iostream>
using namespace std ;

int main () {
    int arr[] = {4,5,6,7};
    int n = 4;
    int d = 2; // 5674 ,6745
    for (int r = 0 ; r < d ; r++){
        int first = arr[0]; // yaha 4 store hua phle me 
        for ( int i = 0 ; i < n -1 ; i++){
            arr[i] = arr[i + 1];
        }
        arr[n-1] = first ;
    }
    for( int i = 0; i < n ; i++){
        cout <<arr[i];

    }
    return 0;

}