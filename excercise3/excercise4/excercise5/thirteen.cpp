#include <iostream>
using namespace std;

int main()
{

    float phy , chem , bio , maths , comp , total , per;
    cin >> phy>>chem>>bio>>maths>>comp;
    total = phy+chem+bio+maths+comp;
    per = total/5;
    if (per >= 90)
    cout << "Grade A"<<endl;
    else if ( per >= 80)
    cout << "Grade B"<<endl;
    else if ( per >= 70)
    cout << "Grade C" <<endl;
    else if ( per >= 60)
    cout << "Grade D" <<endl;
    else if (per >= 40)
    cout << "Grade E"<<endl;
    else 
    cout << "Grade F"<<endl;
    return 0;

}