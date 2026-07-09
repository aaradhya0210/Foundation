#include <iostream>
using namespace std;

int main()
{
    int population = 8000;
    
    int men = (52 * population) / 100;
    int literates = ( 48 * population) / 100;
    int literatemen = ( 35 * population) / 100;

    int illiteratemen = men - literatemen;
    int women = population - men;
    int literatewomen = literates - literatemen;
    int illiteratewomen = women - literatewomen;

    cout << "illietrate men = " << illiteratemen <<endl;
    cout << "illietrate women = " << illiteratewomen <<endl;

    return 0;

}