#include <iostream>
using namespace std;





    int print(char S, int N){
        for (int i =0; i < N; i++){
            cout << S;
        }
        return 0;
    }



    int main(){
        char S = 'S';
        int N = 10;
        cout << print(S,N);
    return 0;
}


