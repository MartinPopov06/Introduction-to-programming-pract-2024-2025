#include <iostream>

using namespace std;

int main(){

    int a,b,c,d,e, x;

    cout << "Enter first number: ";

    cin >> a;

    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    cout << "Enter fourth number:";
    cin >> d;
    cout << "Enter fifth number: ";
    cin >> e;
    




    


    for(x = -100;  x <= 100; x++){
        long long polinom = a * (x*x*x*x) + b * (x*x*x) +  c * x*x+ d*x+e;
        if(polinom >= 0){
        cout<< x << " ";
        }
    } 
     


    return 0;
}