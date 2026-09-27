#include <iostream> 
using namespace std ; 
int main () {
    int rows = 3;
    int cols = 3;
    int matrix[3][3] = { {1,2,3},{4,5,6},{7,8,9}};
    int sum = 0;
    for ( int i = 0; i < rows ; i ++ ){
        sum = sum +matrix[i][cols-1-i];
    }
    cout << "sum = " << sum << endl;
    return 0 ; 
}