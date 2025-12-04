#include <iostream>
using namespace std;

int main(){

    int n;

    cin >> n;
    int m = n * n;
    while (m != 0){
        int q = m %10;
        if (q != 0) cout << q;
        m/=10;
    }





    return 0;
}