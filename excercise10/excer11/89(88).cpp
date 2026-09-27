#include<iostream>
using namespace std;
int main () {
    int arr[] = {5,6,10,12,45,50};
    int max = arr[0];
    int n = 6;
        // minimum element of array
    int mini = INT_MAX; // positive infinity
    for (int i = 0; i < n; i++) {
        if (mini > arr[i]) {
            mini = arr[i]; // 1
        }
    }
    
    
    cout<<mini<<endl;
    return 0;
}