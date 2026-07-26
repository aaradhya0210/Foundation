#include <iostream>
using namespace std ; 
void  sum ( int num1 , int num2){
    int sum = num1 + num2;
    cout << "the ssum is " << sum <<endl;
}
void subtract ( int num1 , int num2){
    int subtract = num1 - num2;
    cout << " The subtraction is " << subtract <<endl;
}
void multiply ( int num1 , int num2){
    int multiply = num1 * num2 ;
    cout << " The multiply is " << multiply << endl;
}
void divide ( int num1 , int num2 ){
    int divide = num1 % num2;
    cout<< "The divide is " << divide << endl;

}
int main () {
    int num1 , num2;
    cout<< "Enter the first number "<<endl;
    cin >> num1;
    cout<< "Enter the second number " <<endl;
    cin >> num2;
    sum(num1,num2);
    subtract(num1,num2);
    multiply(num1,num2);
    divide(num1,num2);
    return 0;

}



