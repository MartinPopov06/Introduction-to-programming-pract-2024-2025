#include <iostream>
using namespace std;

bool palyndrom = true;

void reverseNumbers(int *array, int size){
    for(int i = 0; i < size / 2; i++){
        
       if(array[i] != array[size - 1 - i]){
            palyndrom = false; 
            break;
    }
}

    if(palyndrom){
        cout << "It is a palyndrom" << endl;
    } else{
        cout << "It is not a palyndrom" << endl;
    }
    
    
}


int main(){

   const int maxCount = 60;
    int number;
    int array[maxCount];

    while(number > 60 || number == 0){
        cout << "Enter a number for elements: ";
        cin >> number;
    }

    for(int i = 0; i < number; i++){
        cin >> array[i];
    }

    cout << endl;
    reverseNumbers(array, number);
    

    
    

    return 0;
}