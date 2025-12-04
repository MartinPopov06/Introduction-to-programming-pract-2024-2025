#include <iostream>

using namespace std;

int main(){
    int grade;
    
    cin >> grade;
    if (grade >= 80){
        cout << "6";
    } else if(grade >= 70){
        cout << "5";

    } else if (grade >= 60){
        cout << "4";

    } else if(grade >= 40){
        cout << "3";

    } else {
        cout << "2";
    }
}