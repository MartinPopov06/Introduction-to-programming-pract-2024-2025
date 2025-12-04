#include <iostream>
using namespace std;


void refToNumberPower(int& number, int power){
    
        int result=1;

    if( number != 0 ){
       for(int i = 0; i < power; ++i){
        result *= number;
        
       }
       number = result;
    } else{
        return ;
    }

    

}



int main(){

    int number;
    int power;

    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter a power: ";
    cin >> power;
    refToNumberPower(number,power);
    cout << number;



    return 0;
}