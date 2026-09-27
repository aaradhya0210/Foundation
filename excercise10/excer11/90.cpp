#include<iostream>
using namespace std ;
int main () {
    int arr[] = { 10,20,30,40,50 , 7};
    int even = 0 , odd = 0 ;
    for ( int i = 0 ; i < 6 ; i++)
    {
        if(arr[i] %2 == 0)
        even++;
        else 
        odd++;

    }
    cout <<"even elements "<<even <<endl;
    cout <<"odd elements " <<odd <<endl;
    return 0;

}