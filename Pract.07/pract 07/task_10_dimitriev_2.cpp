#include <iostream>
using namespace std;





void sumOfArrays(const int *array1, const int *array2, int size, int *sum ){
    for(int i = 0; i < size; i++){
           sum[i] = array1[i] + array2[i];
        }
    
    
}


int main(){

    int array1[] = {0,1,1};
    int array2[] {1,0,0};
    int size = 3;
    

    int sum[3];
    

    sumOfArrays(array1,array2,size,sum);

    for(int j = 0; j < size; j++){
        cout << sum[j] << (j < size-1 ? ", ": "");
    }


    return 0;
}