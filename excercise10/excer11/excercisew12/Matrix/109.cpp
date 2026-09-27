#include <iostream>
using namespace std ;
int main ()
{
    int rows = 1;
    int cols = 3;

    int matrix[rows][cols]= {{1,2,3}};
    int scalar = 3;

    int Newmatrix[rows][cols];

    for (int i=0; i< rows ; i++){
        for (int j =0; j<cols ;j++) {
            Newmatrix[rows][cols] = matrix[i][j] * scalar;
            
            cout << Newmatrix[i][j] << " ";
        }
        cout <<endl;

    }
    return 0;
}
