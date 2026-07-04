#include <iostream>
using namespace std;

int main()
{
    int unit;
    float total;
     cout << "Enter electricity charges" << endl;
     cin >> unit;

     if ( unit <= 50)
     total = unit * 0.50;
     else if 
     (unit <= 150)
     total = 25 + (unit - 50) * 0.75;
     else if 
     (unit <= 250)
     total = 100 + (unit - 150) * 1.20;
     else 
     total = 220 + (unit - 250) * 1.50;
     total = total * 1.20;
     cout << "bill "<< total;
     return 0;
}