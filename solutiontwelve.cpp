#include <iostream>
using namespace std;

int main()
{
    int P , T , R , SI ;
    cout<<"The Principal is"<<endl;
    cin >> P;
    cout<<"the time is"<<endl;
    cin >> T;
    cout<<"the rate is"<<endl;
    cin >> R;
    SI = P * R * T / 100;
    cout<<" the Simple interst is "<< SI <<endl;
    return 0;

}