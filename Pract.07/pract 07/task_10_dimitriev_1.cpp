#include <iostream>
using namespace std;


void taskDimitriev1(const int *array, int size, int number){

    for(int i = 0; i < size; i++ ){
        if(array[i] % number == 0){
            cout << "1" ;
        } else{
            cout << ", 0 ";
        }
        
    }
    
}


int main(){
    int size = 3;
    int number = 2;
    int array[] = {0,1,1};
    taskDimitriev1(array,size,number);
    return 0;
}