#include <iostream>
using namespace std;
int main(){



        int m,n;
        int count = 0;
        cin >> m >>n;
        int multii = n * m;

        for(int i = 1; i <= n*m; i++ ){
            count++;
            if(count > n){
                count = 0; cout << endl;
            }
            cout << i;
        }















    return 0;



}