#include <iostream>
#include <cmath>
using namespace std;


    int power(int num, unsigned N){
        cout << "Enter a power: ";
        cin >> N;

        if(N > 0){
            int result = pow(num,N);
            return result;
            

        } else {
            cout << "Invalid power";
        }
        
        
    }




int main(){

    int num,N;
    cout << "Enter a number: ";
    cin >> num;


    cout << power(num, N);
    return 0;
}