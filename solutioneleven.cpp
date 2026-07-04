#include <iostream>
using namespace std;

int main()
{
    int english , maths , chemistry , physcics ,total, average , percentage ;
    cout<<"Marks in english"<<endl;
    cin >> english;
    cout<<"Marks in maths"<<endl;
    cin >> maths;
    cout<<"Marks in chemistry"<<endl;
    cin >> chemistry;
    cout <<"Marks in physcics"<<endl;
    cin >> physcics;
    total = english + maths + chemistry + physcics;
    average = (english + maths + chemistry + physcics) / 4 ;
    percentage = ( total * 100.0) / 400;
    cout <<"total marks are as follows "<< total<<endl;
    cout <<"average marks are as follows "<<average<<endl;
    cout <<"percentage is as follows "<<percentage<<endl;


}