#include <iostream>
using namespace std;
int main(){
    int n{}, i{1};
    cin >> n;
    while(i != n+1)
    {
        for (int j =1; j<=i; j++ )
        {
            cout << j ;
        
        }
    cout << endl;
    i++;
}
    return 0;
}