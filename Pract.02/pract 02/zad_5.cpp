#include <iostream>
using namespace std;

int main(){
double a,b,c;
cin >> a >> b>> c;
if (a+b > c && a+c > b && b+c>a){
    cout << "This is a valid trinagle";

} else {
    cout << "This is not a valid triangle";
}
return 0;
}
