#include <iostream>
using namespace std;

int abs(int num){
    if(num <0){
        return -num;
    } else {
        return num;
    }
}

double fabs(double num){
    if (num < 0){
        if(num <0){
        return -num;
    } else {
        return num;
    
    }
}
}
    int main(){

        int a,b;
        
        cout << "Enter the numbers: ";

        cin >> a >> b;

        cout << abs(a) << endl;
        cout<< fabs(b);






    return 0;
}


