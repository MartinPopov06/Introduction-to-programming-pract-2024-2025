#include <iostream>
using namespace std;
 int main()
{

//additional tasks


// task 1

double deposit, rateLossPerYear, yearsCount ;
cin >> deposit >> rateLossPerYear >> yearsCount;
double newSum;
newSum = deposit * (1 + rateLossPerYear / 100 * yearsCount);
cout << "The new value is: " << newSum;
}

int main() {

// task 3
double t = 25.00, h =60.00, td;
cout << "T: ";
cin >> t;
cout << "H: ";
cin >> h;
td = t - ((100.00 - h) / 5.0);
cout << (double)td;


}

int main() {

// task 4

const double λ = 334000;
double m, q, qKg;
cout << "m: ";
cin >> m;
q = λ * m;
qKg = q / 1000;
cout << "Q: " << q << endl;
cout << "J: " << qKg;

}


int main() {
// task 5

double euro_value, euro_rate , bgn_value, tax;
tax = 0.02;
cout << "Euro: ";
cin >> euro_value;
cout << "Rate: ";
cin >> euro_rate;
bgn_value = euro_value * euro_rate;
cout << "Without tax: " << bgn_value << endl;

cout << "New value: " << bgn_value - bgn_value* tax;


}

int main() {

//task 6

const int R = 6371;
double width, lenght, angleDifference, D;

cout << "Lenght: ";
cin >> lenght;
cout << "Width: ";
cin >> width;
angleDifference = lenght - width;
D = 2 * R * sin(angleDifference / 2);


cout << angleDifference;



}

int main() {

// task 7

double U, R, I, P;
cout << "R: ";
cin >> R;
cout << "U: ";
cin >> U;
I = U / R;
P = U * I;
cout << " I: " << I << endl;
cout << " P: " << P << endl;

}

int main() {


// task 8


double cement, width, lenght, height ;
cement = 2400;
double V, m, G;
cout << "Lenght: ";
cin >> lenght;
cout << "width: ";
cin >> width;
cout << "Height: ";
cin >> height;
V = height * lenght * width;
m = V * cement;
G = m * 9.81;
cout << "V: " << V << endl;
cout << "m: " << m << endl;
cout << "G: " << G << endl;
}



int main(){

            // task 10

    double oneProduktPrice, soldCountProdukt, expenses, profitability, profit;
    cout << "Enter price of a produkt: ";
    cin >> oneProduktPrice;
    cout << "Enter a count of a sold produkts: " ;
    cin >> soldCountProdukt;
    cout << "Enter the expenses: " ;
    cin >> expenses;
    profit = soldCountProdukt * expenses;
    profitability = (profit / expenses) * 100 ;
    cout << "The profit is: " << profit << endl;
    cout << "The profitablity is: " << profitability << "%" << endl;

}


