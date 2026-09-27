#include <iostream> 
using namespace std ;\

int main () {
    int rows = 2;
    int cols = 2;
    int matrixA[2][2] = {{10,20},{20,40}};
    int matrixB[2][2] = {{10,20}, {30,40}};

    int result[2][2];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = 0;

            for (int k = 0; k < cols; k++)
            {
                result[i][j] = result[i][j]
                    + matrixA[i][k] * matrixB[k][j];
            }

            cout << result[i][j] << " ";
        }

        cout << endl;
    }
    return 0; 
}
