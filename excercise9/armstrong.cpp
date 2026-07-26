
// Armstrong number
int n = 1634;
    
    int count = 0;
    
    int temp = n;
    
    // number of digits
    while (temp > 0) {
        temp = temp / 10;
        count++;
    }
    
    temp = n;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }
    
    if (sum == n) {
        cout<<"Armstrong number"<<endl;
    }
    else {
        cout<<"Not an Armstrong number"<<endl;
    }