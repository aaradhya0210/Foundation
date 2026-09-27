#include <iostream> 
using namespace std;
int main () {
    int rows =2 ;
    int cols = 2;
    int matrix1[2][2] = {{1,2}, {3,4}};
    int matrix2[2][2] = {{5,6},{7,8}};
    int newmatrix[2][2];

    newmatrix[0][0] = matrix1[0][0] * matrix2[0][0] + matrix1[0][1] * matrix2[1][0];
    newmatrix[0][1] = matrix1[0][0] * matrix2[0][1] +  matrix1[0][1] * matrix2[1][1];
    newmatrix[1][0] =  matrix1[1][0] * matrix2[0][0] + matrix1[1][1] * matrix2[1][0];
    newmatrix[1][1] = matrix1[1][0] * matrix2[0][1] + matrix1[1][1] * matrix2[1][1];

    for ( int i = 0 ; i<rows ; i++ ) {
        for ( int j = 0 ; j < cols ; j ++) {
            cout << newmatrix[i][j] << " ";
        }
        cout <<endl;
    }
    return 0;
}