#include <iostream> 
using namespace std;
void isPrime (int n ){
    int flag = 0 ;
    for ( int i = 2 ; i < n ; i++){
        if ( n % i == 0){
            flag = 1 ;
            break ;

        }     
    }
    if (flag == 0) {
        cout<<"prime"<< endl;
    }
    else {
        cout<<"not prime"<<endl;
    }
    }
    int main () {
        int n ;
        cout << "ENter a number " << endl;
        cin >> n ;
        isPrime(n);

        return 0;

    }



