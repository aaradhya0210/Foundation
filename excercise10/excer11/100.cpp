#include <iostream>
using namespace std;

int main() {
    int arr[] = {8,3,2,1};
    int n = 4;
    for ( int i = n-1 ; i >= 0; i --) {
        cout << arr[i] <<endl;
    }
    cout<<arr[0];
    return 0;
}