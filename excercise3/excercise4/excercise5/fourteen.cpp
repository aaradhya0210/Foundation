#include <iostream>
using namespace std;

int main()
{
    float bs , hra , da, gross;
    cout << "Enter basic salary "<<endl;
    cin >> bs;
    if ( bs <= 10000)
    {
        hra = bs * 0.20;
        da = bs * 0.80;
    }
    else if ( bs <= 20000)
    {
        hra = bs * 0.25;
        da = bs * 0.90;
    }
    else
    {
        hra = bs * 0.30;
        da = bs * 0.95;

    }
    gross = bs + hra + da ;
    cout << "Gross salary" <<gross;
    return 0;
}