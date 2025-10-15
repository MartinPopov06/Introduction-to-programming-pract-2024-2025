#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // task 1

std::cout << "Oh what" << endl;
std::cout << "a happy day" <<  "Oh yes," << endl;
std::cout << "what a happy day!" << endl;



}

int main() {

        // task 2

char a = 5.4;
char b = 7.9;
int perimeter = 2 * (a + b);
std::cout << perimeter;


}

int main() {

    // task 3

    double currencyBGN, currencyEUR, currencyUSD;
    cin >> currencyBGN;
    currencyEUR = currencyBGN / 1.96;
    currencyUSD = currencyBGN / 1.67;
    cout << "The euro value is:" << currencyEUR << endl;
    cout << "The usd value is:" << currencyUSD ;


    

}

int main() {

    // task 4

    double a, b ;
    cout << "Please enter the length of the first side:";
    cin >> a ;
    cout << "Please enter the length of the second side:";
    cin >> b;
    double perimeter, area;
    perimeter = 2 * (a + b);
    area = a * b;
    cout << "The perimeter is:" << perimeter << endl;
    cout << "The area is: " << area;


    



}

int main() {

    // task 5

    int a, b, c;
    cin >> a >> b >> c;

    bool check;
    check = a < b && b <c;
    cout << boolalpha;
    cout << check;

    
}

int main() {

    // task 6

    int a, b;
    cin >> a >> b;
    int division, remainder;
    division = round(a / b);
    remainder = a % b;
    cout << "The quotient of the division is : " << division << endl;
    cout << "The remainder of the division is : " << remainder << endl;

    
}





int main() {

    // task 8

    const double PI = 3.14159265;
    double radius, perimeter, area;
    cin >> radius;
    perimeter = 2 * PI * radius;
    area = PI * pow(radius, 2);
    cout << "The perimeter is: " << perimeter<< endl;
    cout << "The area is: " << area <<endl;

    return 0;


    
}

int main() {

    // task 9

    int a, b, c;
    cout << "a = " ;
    cin >> a;
    cout << "b = "  ;
    cin >> b;
    cout << "c = " ;
    cin >> c;
    int discriminant;
    discriminant = pow(b, 2) - 4 * a * c;
    int x1, x2;
    x1 = (-b - sqrt(discriminant)) / 2 * a;
    x2 = (-b + sqrt(discriminant)) / 2 * a;
    cout << "x1 = " << x1<< endl;
    cout << "x2 = " << x2 << endl;


    
}

int main() {

    // task 11

    int a, b;
    char max_num [] = "The max number is: ";
    char min_num[] = "The min number is: ";
    cin >> a >> b;
    cout << max_num << max(a,b) << endl;
    cout << min_num<<min(a,b) << endl;

    




}

