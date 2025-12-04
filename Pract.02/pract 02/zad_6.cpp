#include <iostream>
using namespace std;
#include <cmath>
int main(){
    double a,b,c, D, x1,x2;
    cin >> a >> b >> c;
    D = b*b - 4*a*c;
    x1 = -b -sqrt(D) / 2 * a;
    x2 = -b +sqrt(D) / 2 * a;
    cout << "X1 is: " << x1 << endl;
    cout << "X2 is: " << x2;
 
    
    return 0;
}