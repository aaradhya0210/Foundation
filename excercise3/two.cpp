#include <iostream>
using namespace std;

int main()
{
    float bs , da , hr , gross;

    cout <<"Enter basic salary"<<endl;
    cin >> bs;
     
    da = 0.40 * bs;
    hr = 0.20 * bs;
    gross = bs + da + hr;

    cout << "The gross salary is = " << gross << endl;
    return 0;

}