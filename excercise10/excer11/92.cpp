#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    int arr[n] = {12, 23, 45, 67, 89, 34, 88, 66};

    for (int i = 0; i < n; i++)
    {
        cout << "array is as follows " << arr[i] << endl;
    }

    int copy_arr[n];
    for (int i = 0; i < n; i++)
    {
        copy_arr[i] = arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << "The  copy array is as follows " << copy_arr[i] << endl;
    }

    return 0;
}