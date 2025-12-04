#include <iostream>
using namespace std;



bool checkPayndrome(int& number){
      if(number < 0){
        number = -number;

    }
     
    int originalNumber = number;

    int reversedNumber = 0;
    while(number >0){
        int digit  = number %10;
        reversedNumber = reversedNumber * 10 +digit;
        number /= 10;


    }

    if(originalNumber == reversedNumber){
        cout << "It's a palyndrome" << endl;

    }else{
        cout << "It's not a palyndrome";
    }

    return true;
}




int main(){


    int number;
    cout << "Enter a number: ";

    cin >> number;

    checkPayndrome(number);
    

    return 0;
}