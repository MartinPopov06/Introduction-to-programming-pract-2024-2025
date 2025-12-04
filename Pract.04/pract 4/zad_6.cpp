#include <iostream>
using namespace std;


        bool isCapitalLetter(char s){
            if(s >= 'A' && s <= 'Z'){
                return true;
            } else {
                return false;
            }
        }
    bool checkSymbol(char s){
        if((s >= 'A' && s <= 'Z') || (s >= 'a' && s <= 'z')){
            return true;
        } else {
            return false;
        }
    }


    int main(){
        char s;
        cin >> s;
        cout << boolalpha <<checkSymbol(s) << endl;
        cout << boolalpha<<isCapitalLetter(s);


    return 0;
}





