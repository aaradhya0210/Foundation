#include <iostream> 
using namespace std ; 
void maxOfThree(int a , int b , int c ){
if ( a > b && a > c)
cout << "it is max " << a << endl;
if ( b > a && b > c)
cout << "It is max " << b <<endl;
else 
cout << "It is max " << c<< endl;

}
int main () {
    int a ,  b ,  c;
    cout<<"Enter the numbers"<<endl;
    cin >> a;
    cin >> b;
    cin >> c; 
     maxOfThree(a,b,c);
     return 0;

}


