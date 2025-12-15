#include <iostream>
using namespace std;

int main(){


    const int maxSize = 100;
    int array[maxSize];

    int count;

    do{
        cout << "Enter a number: ";
        cin >> count;
    }while(count < 2 || count > 30);

    for(int i = 0; i < count; i++  ){
        cout << "Enter elements in the array: ";
        cin >> array[i];
    }



    int sumofDigits=0;
    int countOfNumbers=0;

    int firstDigit;
    int secondDigit;

    for(int i = 0; i < count; i++){
        firstDigit = array[i] % 10;
        secondDigit  = (array[i] / 10) % 10;

        sumofDigits = firstDigit + secondDigit;
        
        if(sumofDigits >= 10){
            countOfNumbers++;
        }
        

     
        

    }
    

    cout << countOfNumbers ;

    




    return 0;
}