#include <iostream>
using namespace std;
int main(){
    char letter;
    cin >> letter;
    if (letter >= 'a' && letter <= 'z'){
        cout << boolalpha <<toupper(letter);
    } else if (letter >= 'A' && letter <= 'Z'){
        cout << boolalpha << tolower(letter);
    } else {
        cout << "Invalid character" << endl;
    }

    return 0;
}
