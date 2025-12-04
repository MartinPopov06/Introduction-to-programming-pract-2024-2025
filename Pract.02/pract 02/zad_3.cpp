#include <iostream>
using namespace std;
int main(){


    double firstNumber, secondNumber;
    cout << "Enter number #1: ";
    cin >> firstNumber;
    cout << "Enter number #2: ";
    cin >> secondNumber;
   

    cout << ((firstNumber > secondNumber ) ?firstNumber : secondNumber) << endl;
return 0;
}

