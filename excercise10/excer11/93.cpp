#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int total = 100;
    int arr[total];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // position can be 0 to n
    int position = 5;
    if (position < 0 || position > n )
    {
        cout << "invalid position" << endl;
        return 0;
    }

    for (int i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    int value = 100;
    arr[position] = value;
    n++;

    // traversing an array
    cout<<"Traversing an array is as follows"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    

    return 0;
}