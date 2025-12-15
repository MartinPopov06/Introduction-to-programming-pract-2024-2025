#include <iostream>
using namespace std;

int main(){

    char text[] = "Hello";
    char symbol = 'e';
    char replaceSymbol = '*';

    int counter = 0;

    for(int i = 0; text[i] != '\0'; i++){

        if(text[i] == symbol){
            counter++;

            text[i] = replaceSymbol;
        }

    }
    cout << "Count symbol: " << counter << endl;

    cout << "The new text is: " << text;


    return 0;
}