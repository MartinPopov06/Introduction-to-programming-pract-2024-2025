#include <iostream>
using namespace std;
int main(){



    int number, number1, sum=0 ,sum2 =0, i =0;
    cout << "Enter a number: ";
    cin >> number;
   


    for(i = 1; i < number; i++){
        cin >> number1;
        sum += number1;
         sum2 += i;
    }
    sum2 += i;
    cout << sum2 -sum;



    return 0;
}