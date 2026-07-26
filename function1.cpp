#include<iostream>
using namespace std;
void sum ( int num1 , int num2){
    int sum = num1 + num2 ;
    cout << "The sum is " << sum << endl;
}
void min( int num1 , int num2){
    int min = num1-num2 ;
    cout<<"the minus is " << min << endl;   
}
int main (){
    sum(20,30);
    min(50,10);
    return 0;
}