#include <iostream>
using namespace std;



void task3(int N){
        int binary[8],binaryLenght = 0;
        for(; N >0; N /= 2, binaryLenght++){
            if(N% 2 ==0 ) binary[binaryLenght] = 0;
            else binary[binaryLenght] = 1;
        }
        for(binaryLenght --; binaryLenght >=0; binaryLenght--){
            cout << binary[binaryLenght];
        }
    }



int main(){
    
    const int n = 5;   
    task3(123);
    cout << endl;
    int arr[n];
 






    return 0;
}