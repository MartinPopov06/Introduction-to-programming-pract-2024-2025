#include <iostream>
using namespace std;

        /*Напишете функция
   - която проверява дали дадено число е в даден интервал. 
   - askUser(int from, int to), която кара потребителя да въвежда числа докато не въведе число,
     което да е в указания интервал, а като резултат връща въпросното число.*/
    
    int askUser(int from, int to){
        int number;
        
        
        while(true){
            cout << "Enter a number: ";
            cin >> number;
            if(number >= from && number <= to){
                cout << number << endl;
                return number;
            } else {
                cout << "Invalid number"<< endl;
            }
        }

        return 0;
    }



int main(){
    int from, to;
   cout << "Enter from range: ";
    cin >> from;
    cout << "Enter to range: ";
    cin >> to;
    
    int result =  askUser(from,to);
        
    cout << result << endl;

    return 0;
}