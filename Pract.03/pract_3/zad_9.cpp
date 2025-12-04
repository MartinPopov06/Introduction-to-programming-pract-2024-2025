#include <iostream>
using namespace std;

int main() {

    int number;
    int firstFibo = 1;
    int secondFibo = 1;

    cout << "Enter a number: ";

    cin >> number;
        
        
    if (firstFibo < number && secondFibo < number){
        cout << firstFibo << " " << secondFibo << " ";
    }

    while(true){

        int nextNumber = firstFibo + secondFibo;
        if(nextNumber >= number) 
        break;
        cout << nextNumber << " ";
        firstFibo = secondFibo;
        secondFibo = nextNumber;
    }

    return 0;
}
