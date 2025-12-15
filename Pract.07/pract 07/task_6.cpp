#include <iostream>
using namespace std;



   

void symbolsPalindrom(char *array, int size){
     bool palyndrom = true;
    for(int i = 0; i < size / 2; i++){
        
       if(array[i] != array[size - 1 - i]){
            palyndrom = false; 
            break;
    }
}

    if(palyndrom){
        cout << "Yes" << endl;
    } else{
        cout << "No" << endl;
    }
    
    
}


int main(){
    const int MAX_SIZE = 100;
    unsigned int  count;


    char arraySymbols[MAX_SIZE];


    
   

    do{
        cout << "Enter a count for symbols: ";
        cin >> count;
        if(count > 0 && count <= MAX_SIZE){
         cout << "Enter symbols of array: " << endl;
        for(int i = 0; i < count; i++ ){
            cin >> arraySymbols[i];
        }
    
        symbolsPalindrom(arraySymbols,count);
    }else{
            cout << "Invalid number" << endl;
        }
    }while(count != 0);

    
       








    return 0;
}