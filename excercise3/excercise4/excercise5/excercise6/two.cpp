#include <iostream>
using namespace std;

int main()
{
    int age , amount ;
    char health , place , sex ;
    
    cout << "health( E for excellent , P for Poor ) :";
    cin >> health;
    cout << "place ( C for city and V for vilage)";
    cin >> place;
    cout << "Sex ( M/F)";
    cin >> sex;
    cout << "enter age "<<endl;
    cin >> age;
    cout << "Enter amount"<<endl;
    cin >> amount;

    if ( health == 'E' && age >= 25 && age  <= 35 && place == 'C' && sex == 'M' && amount <= 200000)
    {
        cout << "Insured \n";
        cout << "Premium is 4 per thousand ";
        cout << "Max policy amount is 200000";
    }
    else if ( health == 'E' && age >=25 && age <= 35 && place == 'V' && sex == 'F' && amount <= 100000)
    {
        cout << "Insured \n";
        cout << "Premium is 3 per thousand ";
        cout << "max policy amount is 100000";
    }
    else if ( health == 'P' && age >=25 && age <= 35 && place == 'V' && sex == 'M' && amount <= 10000)
    {
        cout << "Insured \n";
        cout <<" Premium is 6 per thousand ";
        cout << " Max policy amount is 10000";
    }
    else 
    cout << "Not insured "<<endl;
    return 0;


}