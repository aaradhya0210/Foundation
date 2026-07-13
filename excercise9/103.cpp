#include <iostream> 
using namespace std ;
int main () {
    int a , b , result = 1;
    cout<< "Enter first number"<<endl;
   cin >> a;
   cout << "Enter second number "<< endl;
   cin >> b;
for ( int i = 1 ; i <=b ; i++){
    result = result * a;
}
cout << "Result is "<< result <<endl;
return 0;




}