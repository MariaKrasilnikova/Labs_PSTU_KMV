#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    cout << "Введите три числа: ";
    int a, b, c;
    cin >> a >> b >> c;
    cout  << "Решите уравнение: " << a << "*x*x + " << b << "*x + " << c << " = 0" << '\n';
    int d;
    d = b*b + 4*a*c;
    int x1, x2;
    x1 = ((-b) + sqrt(d))/(2*a);
    x2 = ((-b) - sqrt(d))/(2*a);
    cout << "x1 = " << x1 << '\n';
    cout << "x2 = " << x2;
    return 0;
}