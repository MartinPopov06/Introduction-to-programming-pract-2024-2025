#include <iostream>
using namespace std;



    int calculate(int a, int b, char action){
        cout << "Enter an action: ";
        cin >> action;
        if(action == '+'){
            cout << a+b;
        } else if(action == '/' && b != 0){
            cout << a / b;
        } else if(action == '*'){
            cout << a *b;
        } else if(action == '-'){
            cout << a -b;
        } else {
            return a+b;
        }




        
    }





int main(){

    int a,b,action;
    cout << "Enter first number: ";
    cin >>a;
    cout << "Enter second number: ";
    cin >> b;

    cout << calculate(a,b,action);
    return 0;
}