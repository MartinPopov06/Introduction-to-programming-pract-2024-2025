#include <iostream>
using namespace std;
int main(){


    int real_number, number_in_mind, attempts=0;
    cin >> real_number;
    cin>> number_in_mind;
    if(real_number <0 || real_number > 100){
    cout << "Enter a number between 0 and 100";
    }
    while(real_number =! number_in_mind){
        if(number_in_mind < real_number){
            cout << "Your number is lower than the real number";
        }
        else if(number_in_mind > real_number){
            cout << "Your number is bigger than the real number";
        } else{
            cout << "Your number is correct";
            
        }
        
        
    }
    cout << "Attempts: " << attempts << endl;
    return 0;
}