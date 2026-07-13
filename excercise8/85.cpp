#include <iostream> 
using namespace std;

int reverse(int num) {
    int rev = 0;

    while ( num > 0){
        int digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev ;
}
int main ()
{
    int n ;
    cout << "Enter a number " << endl;
    cin>> n;
    int rev = reverse (n);
    cout<<"reverse "<<rev<<endl;
    return 0;
}
