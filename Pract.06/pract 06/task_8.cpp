#include <iostream>
using namespace std;

int main(){





        const int matrixA[2][3] = {2,3,6,11,5,9};
        const int matrixB[3][4] = {2,1,4,6,12,23,13,33,9,10,5,8};
        
         int matrixC[2][4];

         
         for(int i = 0; i < 2; i++){
            for(int j = 0; j < 4; j++){
                matrixC[i][j] = 0;
            }
         }

         

         

         for(int i =0; i < 2; i++){
            for(int j = 0; j < 4; j++){
                for(int k = 0; k < 3; k++){
                    matrixC[i][j] +=  (matrixA[i][k]*matrixB[k][j]);
                }
            }
         }
        
         cout << "The new matrix is: " << endl;

        
         for(int i = 0; i<2; i++){
            for (int j = 0; j< 4; j++)
                cout << matrixC[i][j] << "\t";
                cout << endl;
            
         

        }


    return 0;


}