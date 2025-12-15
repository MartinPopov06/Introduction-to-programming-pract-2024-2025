#include <iostream>
using namespace std;



void reverseNumbers(int *array, int size){
    for(int i = 0; i < size / 2; i++){
        swap(array[i], array[size-1-i]);
    }

    for(int j = 0; j < size; j++){

        cout << array[j] << " ";
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


    reverseNumbers(array, number);


    return 0;
}