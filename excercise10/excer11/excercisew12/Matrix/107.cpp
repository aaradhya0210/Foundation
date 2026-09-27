#include <iostream>
using namespace std ;
int main () {
    int rows = 3;
    int cols = 4;
    int matrix1[rows][cols] = {{10,20,30,40},{50,60,70,80},{90,100,110,120}};
    int matrix2[rows][cols] = {{10,30,60,70},{60,50,70,80},{120,289,222,222}};
    int sumMatrix[rows][cols];
    //rows 
    for (int i = 0 ; i < rows ; i ++) {
        //cols 
        for (int j = 0 ; j < cols ; j ++){
            sumMatrix[i][j]= matrix1[i][j] + matrix2[i][j];
            cout  << sumMatrix[i][j] << " ";
        }
        cout <<endl;

    }
    return 0;

}