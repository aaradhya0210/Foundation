#include<iostream>
using namespace std ;
int main () {
    int arr[] = {5,6,10,12,45,50};
    int max = arr[0];
    int n = 6 ;
    for (int i = 1 ; i < n ; i++){
        if(max< arr[i]){
            max = arr[i];

        }
    }
    cout << max<< endl;
    return 0;

}