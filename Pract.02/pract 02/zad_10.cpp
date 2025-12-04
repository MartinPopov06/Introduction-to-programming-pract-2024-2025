#include <iostream>
using namespace std;
int main(){  
    
    
    int a,b;
    char oper1 = '+';
    char oper2 = '-';
    char oper3 = '*';
    char oper4 = '/';
    char operation;
    cin>> a;
    cin >> operation;
    cin>> b;
    

   
    

    if (operation == oper1){
        cout << a+b;
    } else if(operation == oper2){
        cout << a-b;
    } else if (operation == oper3){
        cout << a * b;

    }  else if(operation == oper4 && b != 0){
        cout << a / b;
    } else if (operation == oper4 && b == 0) {
        cout << "Cannot divide by 0";
    } 

    


    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

