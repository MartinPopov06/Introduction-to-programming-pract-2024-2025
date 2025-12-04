#include <iostream>
using namespace std;


int main(){

    const int number = 6;
    int array[number] = {1, 2, 3, 4, 5, 6};

    for(int i = 0; i < number - 1; i++){

        if(i % 2 == 0)
        {
            if(array[i] <= array[i+1])
            {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }

            if(i % 2 == 1)
            {
                if(array[i] >= array[i+1])
                {
                    int temp = array[i];
                    array[i] = array[i+1];
                    array[i+1] = temp;
                }
            }

    
    
    }


    for(int i = 0; i < number; i++){
        cout << array[i] ;


        if(i < number - 1)
        {
            if(i % 2 == 0){
                cout << " " << '>' << " ";
            } else{
                cout << " " << '<' << " ";
            }
        }

    }
    return 0;
}