#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;

    double D = b * b - 4 * a * c;

    if (D > 0) {
        double x1 = (-b + sqrt(D))/(2 * a);
        double x2 = (-b - sqrt(D))/(2 * a);
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2;
    } else if (D == 0) {
        double x = -b / (2 * a);
        cout << "x1 = x2 = " << x;
    } else {
        cout << "No real roots";
    }

    return 0;
}