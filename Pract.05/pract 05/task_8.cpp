#include <iostream>
using namespace std;

void absOfNumber(int& n){
    if( n < 0){
        n *= (-1);
        cout << n;
    } else{
        cout << n;
    }
}

int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;
    absOfNumber(number);
}