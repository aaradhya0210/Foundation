#include <iostream>
using namespace std;
// int main (){
//   cout << "Enter the array " <<endl;
// int arr[] = { 10,15,20,25,30,3,40};
// int n = arr[-1];
// cout<< "the second largest element is " << n << endl;
// return 0;
//}

// int main () {
//     int arr [] = {10,15,20,25,30,80};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0 ; i < size -1 ; i++)
//     {
//         for (int j = i + 1 ; j < size ; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;

//             }

//         }
//     }
//     cout << "Second largest element is " << arr[size - 2];

//     return 0;
// }

// Program for largest and smallest
// int main () {
//     int n = 5;
//     int arr[n] = {34,22,40,21,7};

//     // When all array elemts are positive
//     int maxi = arr[0];
//     for ( int i = 0 ; i < n ; i++) {
//         if ( maxi < arr[i]) {
//             maxi = arr[i];
//         }
//     }

//     cout<<"The max is as follows "<<maxi<<endl;

//     int mini = arr[0];
//     for (int i = 0; i < n ; i++){
//         if ( mini > arr[i]) {
//             mini = arr[i];
//         }
//     }
//     cout<<"The minimum is as follows "  <<mini<<endl;

//     return 0;
// }
int main()
{
    int n = 5;
    int arr[] = {12, 34, 45, 21, 4};
    int maxi = arr[0];
    int secondMaxi = maxi;
    for (int i = 0; i < n; i++)
    {
        if (maxi < arr[i])
        {
            maxi = arr[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (secondMaxi < arr[i] && arr[i] != maxi)
        {
            secondMaxi = arr[i];
        }
    }
    cout << "the second maxi is as follows " << secondMaxi << endl;
    cout << "the maxi is as follows " << maxi << endl;

    return 0;
}
