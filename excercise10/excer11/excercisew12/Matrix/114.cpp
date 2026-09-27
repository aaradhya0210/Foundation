#include <iostream> 
using namespace std;
int main () {
    int rows =3;
    int cols = 3;
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,8}};
    // sum of rows 
    for ( int i =0 ; i < rows ; i++)
    {
        int sum = 0;
        for (int j = 0; j < cols ; j++) {
            sum = sum + matrix[i][j];
        }
        cout << "Row " << i + 1 << " SUM = " << sum <<endl;
    }
    // sum of colums 
    for ( int j = 0; j < cols ; j ++) 
    {
        int  sum = 0;
        for (int i = 0; i < rows ; i ++) {
            sum = sum + matrix[i][j];
        }
        cout << "Column " << j + 1 << "sum = " << sum << endl;
    }
    return 0;


}