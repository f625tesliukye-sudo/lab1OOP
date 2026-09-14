#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

class a {
private:
    double x;
    double y;
    double z;
    double b;

public:
    a(double x, double y, double z, double b)
        : x(x), y(y), z(z), b(b) {
    }

    double calculate() {
        double numerator = 1 + sqrt(pow(sin(pow(fabs(x + y), 0.4)), 2));
        double denominator = 2 + pow(b, 2) + pow(sin(pow(y - z, 3)), 2);
        return numerator / denominator + tan(3 * x / z);
    }
};

class b {
private:
    double x;
    double y;
    double z;

public:
    b(double x, double y, double z)
        : x(x), y(y), z(z) {
    }

    double calculate() {
        double cosPart = pow(cos(atan((pow(x, 2) + y) / (z + 1))), 2);
        double expPart = (x / z) * exp(3 * x + y);
        return cosPart + expPart;
    }
};

int main() {

    cout << "1:" << endl;
    double x = 0.48 * 6;
    double y = 0.47 * 6;
    double z = -1.32 * 6;

    b objectB(x, y, z);
    double valueB = objectB.calculate();

    a objectA(x, y, z, valueB);
    double valueA = objectA.calculate();

    cout << "b = " << valueB << endl;
    cout << "a = " << valueA << endl;

    cout << endl;

    cout << "2:" << endl;
    for (x = -1; x <= 1; x += 0.2) {

        b objectB(x, y, z);
        double valueB = objectB.calculate();

        a objectA(x, y, z, valueB);
        double valueA = objectA.calculate();

        cout << setw(7) << "b = " << valueB << setw(10) << "a = " << valueA << endl;

    }

    return 0;
}