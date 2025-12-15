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

    for(int i = 1; i < number; i++){
        if(array[i] < minElement){
            minElement = array[i];
        }


        if(array[i] > maxElement){
            maxElement = array[i];
        }
    }

    cout << "The min Element is: " << minElement << endl;
    cout << "The max Element is: " << maxElement;



    return 0;
}