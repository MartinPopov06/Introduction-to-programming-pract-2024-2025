#include <iostream>
using namespace std;

void reversedNumber(int& n){
    int result=0;
    if (n < 0){
        n = -n;
    }
    while(n >0){
        int digit = n % 10;
        result  = result * 10 + digit;
        n /= 10;
        
        
        
    }
    cout << result;
}

int main(){

    int number;

    cout << "Enter a number: ";
    cin >> number;

    reversedNumber(number);


    return 0;
}

