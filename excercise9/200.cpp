#include <iostream>
using namespace std;

int main()
{
    int n = 123;
    int flag = 0; // Assume flag is  0, assume number is prime
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            flag = 1;  // changed the flag so its not prime
            break;
        }
    }
    
    if (flag == 0) // assumption that hold true
        cout<<"prime"<<endl;
    else {
        cout<<"not prime"<<endl;
    }

    return 0;
}

