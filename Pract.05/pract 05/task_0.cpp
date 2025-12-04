#include <iostream>
using namespace std;

string quadrant(int x, int y) {
    if (x == 0 && y == 0) return "Point is at the origin (0,0)";
    if (x == 0) return "Point lies on the Y axis";
    if (y == 0) return "Point lies on the X axis";
    if (x > 0 && y > 0) return "First quadrant";
    if (x < 0 && y > 0) return "Second quadrant";
    if (x < 0 && y < 0) return "Third quadrant";
    return "Fourth quadrant.";
}

int main() {
    int x, y;
    cout << "Enter x and y: ";
    cin >> x >> y;
    cout << quadrant(x, y) << endl;
    return 0;
}