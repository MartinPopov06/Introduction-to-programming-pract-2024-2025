#include <iostream>
using namespace std;
int main(){


    int number;
  


    cout << "Enter a number";
    cin >> number;

        for( int i = 1; i < number; i++){
            for(int  j =i ; j <number; j++){
                for(int k = j; k < number; k++){
                    if(i*i + j * j == k * k){
                        cout << i <<" " << j << " "<< k << endl;
                    }
                }
            }
        }






    return 0;
}