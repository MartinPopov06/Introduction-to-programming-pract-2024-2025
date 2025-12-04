#include <iostream>
using namespace std;

    void isNegativeOrPositive(int num){

        if(num<0){
            cout << "The number is negative ";
        } else {
            cout << "The number is positive";
        }

    }

   



int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;

     isNegativeOrPositive(num);

    return 0;
}