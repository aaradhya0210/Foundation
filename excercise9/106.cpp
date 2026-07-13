#include <iostream> 
using namespace std ;
int main () {
    int user , computer ; 
    int matchsticks = 21 ;
    {
        cout << "Matchsticks left "<< matchsticks <<endl;
        cout << "pick matchsticks from 1 to 4 "<<endl;
        cin >> user ; 
      computer = 5 - user ;
        cout << "Now the computer will pick "<< computer <<endl;
    
        matchsticks = matchsticks - user - computer ;


    }
    cout<< "you have to pick it "<<endl;
    cout<<" you lose "<<endl;

}