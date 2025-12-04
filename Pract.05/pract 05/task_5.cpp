#include <iostream>
using namespace std;


void refTwoSymbols(char& symbol1, char& symbol2){

    if((symbol1 >= 'A' || 'a' && symbol1 <= 'Z' || 'z') && (symbol2 >= 'A' || 'a' && symbol2 <= 'Z' || 'z')){
        cout << "They are valid symbols" << endl;
    }

    if(symbol1 < symbol2){
        cout  <<symbol2 << " " << symbol1;

    } else{ 
        cout << "Ascii code of symbol 1: " << int(symbol1) <<endl;
        cout << "Ascii code of symbol 2: " << int(symbol2) <<endl;
    }


}

int main(){


    char symbol1, symbol2;

    cout << "Enter first symbol: ";
    cin >> symbol1;

    cout << "Enter second symbol: ";
    cin >> symbol2;

    refTwoSymbols(symbol1,symbol2);


    return 0;
}