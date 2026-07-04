#include <iostream>
using namespace std;

int main()
{
    int hardness ,  tensile_strength ;
    float carbon_content;

    cout << "Enter the hardness"<<endl;
    cin>> hardness;
    cout << "Enter the carbon content"<<endl;
    cin>> carbon_content;
    cout << "Enter the tensile strength ladle"<<endl;
    cin >> tensile_strength;

    if (hardness > 50 && carbon_content < 0.7 && tensile_strength > 5600)
    cout << "Grade is 10" << endl;
    else if ( hardness > 50 && carbon_content < 0.7)
    cout << "Grade is 9" <<endl;
    else if ( carbon_content < 0.7 && tensile_strength > 5600)
    cout << "Grade is 8" <<endl;
    else if ( hardness > 50 && tensile_strength > 5600)
    cout << " Grade is 7" << endl;
    else if ( hardness > 50 || carbon_content < 0.7 || tensile_strength > 5600)
    cout << " grade is 6" << endl;
    else 
    cout << " Grade is 5 " <<endl;
    return 0 ;
}





