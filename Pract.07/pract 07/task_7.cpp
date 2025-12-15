#include <iostream>
using namespace std;

// void inputArray(int *array, unsigned int size){
//     cout << "Enter a count of elements: ";
//     cin >> size;
//     for(int i = 0; i < size; i++){

//         cout << "Enter elements: ";
//         cin >> array[i];
//     }

// }


int main(){

    const size_t sizeArray = 8;

    int array[sizeArray];

    int additionalNumber;

    

   

    cout << "Enter elements: " << endl;
    for(int i = 0; i < sizeArray; i++){

        
        cin >> array[i];
    }
    int countOfNumber = 0;
    cout << "Enter additional number: ";
    cin >> additionalNumber;

    for(int j = 0; j < sizeArray; j++){
        if(additionalNumber == array[j]){
            countOfNumber++;
        }
        
    
    }
    cout << countOfNumber << endl;

     for(int k = 0; k < sizeArray; k++){
        if(additionalNumber == array[k]){
            cout << k << " "; 
        }
        
    
    }
    
    

     


    return 0;
}