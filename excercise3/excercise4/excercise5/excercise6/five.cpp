#include <iostream>
using namespace std;

int main() 
{
    int time ;
    cout << "Enter the time take by the worker " << endl;
    cin >> time;
    if ( time >= 2 && time <= 3)
    cout << " The worker is highly effiencent "<<endl;
    else if ( time >= 3 && time <= 4)
    cout << " The worker should improve speed be like a cheetah " <<endl;
    else if ( time >= 4 && time <=5)
    cout << " Leave the company asap" <<endl;
    return 0;
}