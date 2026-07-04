#include <iostream>
using namespace std;

int main()
{
    int length , breadth , perimeter ;
    cout << "Enter length" << endl;
    cin >> length;
    cout << "Enter breadth" << endl;
    cin >> breadth;

    perimeter = 2 * (length + breadth);
    cout <<"Perimeter is  = " << perimeter << endl;
    return 0; 
}