#include <iostream>
using namespace std;







int  isPrime(int number){
        if(number < 2 && number % 2==1)
        return false;
        for(int i = 2; i * i <= number; i++ ){
            if(number % i ==0 ) return false;
        }

        return true;
}



void loopOfPrimeNumbers(int number){
        
        for(int j = 2; j <=number; j++ ){
            if(isPrime(j)){
                cout << j<< " ";
            }
            
        } 




    }

     void SumofPrime(int number){

        for(int k = 2; k<=number/2; k++){
            if(isPrime(k)&& isPrime(number-k)){
                cout << k << " " << number - k << "\n" ;
            }
        }


    }




int main(){
    int number;
    cout << "Enter a number: ";
    cin >> number;

     

    SumofPrime(number);
    return 0;
}




   




   






