#include <iostream>
#include <cmath>
using namespace std;

int main(){




    int wholeNumber;
    int x;
    

    cout << "Enter a number: ";
    cin >> wholeNumber;

    int squareRootOfNumber = sqrt(wholeNumber);
        x = (int)squareRootOfNumber;
    if(wholeNumber ==  x * x ){
        cout << "True";
    } else {
        cout << "False";
    }

    

    return 0;
}