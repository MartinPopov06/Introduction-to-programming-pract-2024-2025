#include <iostream>
using namespace std;

void threeNumber(int& firstNumber, int& secondNumber, int& thirdNumber){
 
    
    if( firstNumber <= secondNumber && secondNumber <= thirdNumber){
        cout << firstNumber << " " << secondNumber << " " << thirdNumber;

    } else if( firstNumber <= thirdNumber && thirdNumber <= secondNumber){
        cout << firstNumber << " " << thirdNumber << " " << secondNumber;
    }
        else if(secondNumber <= firstNumber && firstNumber <= thirdNumber){
        cout << secondNumber << " " << firstNumber << " " << thirdNumber;
    } else if(secondNumber <= thirdNumber && thirdNumber <= firstNumber){
        cout << secondNumber << " " << thirdNumber << " " << firstNumber;
    }
    else if(thirdNumber <= firstNumber && firstNumber <= secondNumber ){
        cout << thirdNumber << " " << firstNumber << " " << secondNumber;
    }else if(thirdNumber <= secondNumber && secondNumber <= firstNumber ){
        cout << thirdNumber << " " << secondNumber << " " << firstNumber;
    }


}


int main(){


    int first_Number, second_Number, third_Number;

    cout << "Enter first number: ";
    cin >> first_Number;
    cout << "Enter second number: ";
    cin >> second_Number;
    cout << "Enter third number: ";
    cin >> third_Number;

    threeNumber(first_Number, second_Number, third_Number);

    return 0;

}