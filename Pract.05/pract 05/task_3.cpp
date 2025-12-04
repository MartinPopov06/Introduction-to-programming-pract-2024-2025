#include <iostream>

using namespace std;


bool isPrime(int N){

    

    

    for(int i = 2; i * i <= N; i++){
        if(N % i == 0){
            return false;
            
        }
        
    }   
    return true;
    
}



void nextNumber(int& n){

    int next_Number = n + 1;

   while(true){

    if(isPrime(next_Number)){

        n = next_Number;
        break;
    }
    next_Number++;
   }

}


int main(){





int number;

cout << "Enter a number: ";
cin >> number;




cout << "Start Number: " << number<< endl;


nextNumber(number);

cout <<"Next number: "<< number;

    return 0;
}