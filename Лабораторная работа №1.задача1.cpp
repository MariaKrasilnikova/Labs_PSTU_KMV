#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    float a = 1000, b = 0.0001;
    float w = (a+b)*(a+b);
    float z = (a*a + 2*a*b);
    float c = w - z;
    float r = b*b;
    float otv1 = c/r;
    cout << "Òèï float:"<< ' ' << otv1 << '\n';
    double x = 1000, y = 0.0001;
    double q = (x+y)*(x+y);
    double s = (x*x + 2*x*y);
    double v = q - s;
    double d = y*y;
    double otv2 = v / d;
    cout << "Òèï double:" << ' ' << otv2 << '\n';
    return 0;
}
