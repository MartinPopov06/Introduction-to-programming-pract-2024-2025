#include <iostream>
using namespace std;

    int isEven(int num){
        
        return num % 2 ==0 ;

    }

int main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout <<boolalpha<< isEven(num);
    return 0;
}