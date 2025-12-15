#include <iostream>
using namespace std;




int main(){

    const int maxSize = 100;
    int array[maxSize];

    int count;

    do{
        cout << "Enter a number: ";
        cin >> count;
    }while(count < 2 && count > 30);

    for(int i = 0; i < count; i++  ){

        cin >> array[i];
    }

    double minElement = array[0];
    double maxElement = array[0];
    int minIndex = 0;
    int maxIndex = 0;

    for(int i = 1; i < count; i++){
        if(array[i] < minElement){
            minElement = array[i];
            minIndex = i;
        }


        if(array[i] > maxElement){
            maxElement = array[i];
            maxIndex = i;
        }

        
    }
    
    cout << "The min element is: " << minElement << endl;
    cout << "The max element is: " << maxElement << endl;

    if(minIndex != maxIndex){
        int temp = array[minIndex];
        array[minIndex] = array[maxIndex];
        array[maxIndex] = temp;
    }

    cout << "The new array is: ";
    for(int k = 0; k < count; k++){
        cout << array[k] << " ";
    }
    


    return 0;
}