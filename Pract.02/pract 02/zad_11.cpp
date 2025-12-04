#include <iostream> 
using namespace std;
int main(){




        int a,b,c;
        cin >> a >> b >> c;
         
        if(a < b && b < c && a < c){
            cout << c << b << a;
        } else if(c < a && a < b && c < b){
            cout << b << a << c;
        } else if (a > c && a > b && b < c) {
            cout << a << c << b;
        } else {
            cout << "Error";
        }
        


    return 0;
}