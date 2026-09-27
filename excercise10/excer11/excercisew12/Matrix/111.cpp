
#include <iostream>
using namespace std;

int main()
{
    const int m1 = 3;
    const int n1 = 4;

    const int m2 = 4;
    const int n2 = 3;

    
    int matrix1[m1][n1] = {{ 1, 2, 3, 4 }, 
                            { 5, 6, 7, 8 }, 
                            { 9, 10, 11, 12}};
    int matrix2[m2][n2] = {{ 1, 2, 3 }, 
                            { 4, 5, 6 }, 
                            { 7, 8, 9 }, 
                            { 10, 11, 12 }};
                            
                            
    if (n1 != m2) {
        cout<<"Not possible as n2 is not equal to m2"<<endl;
        return 0;
    }
    
    int ans[m1][n2] = {0};
    /*
        0 0 0
        0 0 0
        0 0 0
    
    */
    
    for (int i = 0; i < m1; i++) { // till matrix one rows
        for (int j = 0; j < n2; j++) { // till matrix two columns
            for (int k = 0; k < n1; k++) { // till all the columns of matrix 1
                ans[i][j] = ans[i][j] + matrix1[i][k] * matrix2[k][j];
            }
        }
    }
    
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}