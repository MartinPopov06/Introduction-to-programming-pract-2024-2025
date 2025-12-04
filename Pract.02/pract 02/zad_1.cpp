#include <iostream>

using namespace std;


int main(){
    int year;
    cout << "Enter a year: ";
    cin >> year;
    if(year %4 == 0 && (year / 100 || year / 400 )) {
        cout << "You entered a leap year.";
    }
    else {
        cout << "You didnt enter a leap year.";
    }
}

