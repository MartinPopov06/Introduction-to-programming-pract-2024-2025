#include <iostream>
using namespace std;


int refThreeNumber(int& firstNumber, int& secondNumber, int& thirdNumber){




    secondNumber = secondNumber - firstNumber;
    int temp = secondNumber;

    int result = (firstNumber * 2) + temp + (thirdNumber + 10);


    return result;

}


int main(){

    int firstNumber,secondNumber,thirdNumber;

    cin >> firstNumber >> secondNumber >> thirdNumber;

    
    int final = refThreeNumber(firstNumber, secondNumber, thirdNumber);

    cout << final;

    return 0;
}