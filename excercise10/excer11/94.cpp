#include<iostream>
using namespace std;
int main () {
    int n = 5;
    int arr[] = { 12,34,56,78,90};
    for (int i = 0 ; i < n; i++){
        cout <<arr[i]<<endl;
    }
    int index = 1;
    for (int i = index ; i < n-1 ; i ++){
        arr[i] = arr[i + 1];
    }
    n--;
    cout<<"After deleting it is as follows "<<endl;

    for (int i = 0 ; i < n ; i ++){
        cout<<arr[i]<<endl;
    }
    return 0;

}