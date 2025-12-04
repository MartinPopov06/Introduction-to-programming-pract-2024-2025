#include <iostream>
using namespace std;

int findFirstRepeatingElement(const int arr[], int size) {


    int minIndex = size; 

    
    for (int i = 0; i < size; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (arr[i] == arr[j]) {
                if (j < minIndex) {
                    minIndex = j;
                }
                break; 
            }
        }
    }


    if (minIndex < size) {
        return arr[minIndex]; 
    } else {
        return false; 
    }
}



int main() {
    int numbers[] = {10, 5, 3, 4, 3, 5, 6}; 
    int N = sizeof(numbers) / sizeof(numbers[0]); 

    int result = findFirstRepeatingElement(numbers, N);

    if (result != -1) {
        cout << "The first repeating element is: " << result << endl; 
    } else {
        cout << "No repeating elements found." << endl;
    }
    return 0;
}
