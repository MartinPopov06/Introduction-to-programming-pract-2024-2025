#include <iostream>
using namespace std;

int main(){

    
    const int maxNumber = 60;
    int number;

    double array[maxNumber];

    while(number > maxNumber || number == 0){

        cout << "Enter a number: ";
        cin >> number;
    }

    for(int i = 0; i < number; i++){

        cout << "Enter elements for the array: ";
        cin >> array[i];
    }

    double minElement = array[0];
    double maxElement = array[0];
    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < number; i++){
        if(array[i] < minElement){
            minElement = array[i];
            minIndex = i;
        }


        if(array[i] > maxElement){
            maxElement = array[i];
            maxIndex = i;
        }

        
    }
    

    

    cout << "The min Element is: " << minElement << endl;
    cout << "The max Element is: " << maxElement << endl;

   if(minIndex != maxIndex){

        double temp = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = temp;
    
    }

    for(int j = 0; j < number; j++){
        
        cout << array[j] << ' ';
    }


    

    
    

    return 0;
}