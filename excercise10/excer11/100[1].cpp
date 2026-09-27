#include <iostream>
using namespace std;

int main()  {
    int arr[] = {8,9,5,4};
    int n = 4;
    int new_array[4];// empty array banadi  
    for ( int i = 0 ; i < n ; i ++){  // i chalega 0 se 3 tk
        new_array[i] = arr[n-1-i]; // new array[0] = arr[3]
    }
    for (int i = 0; i <n ; i++){
    cout <<new_array[i]<<endl;
    cout <<new_array[0] <<endl;
    }

    return 0;

}