#include <iostream>
using namespace std;

int main(){



        int arraA[] = {2,3,5,4};
        int arraB[] = {4,2,6,10};


        for(int i = 0; i < 4; i++){
            for(int j = 0; j < 4; j++){
                if(arraA[i] == arraB[j]){
                    cout << arraA[i] << " ";
                         break;
                }
            }
        }

        cout << endl;
















    return 0;
}