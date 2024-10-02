// Lab_03_1.cpp
// Євтюхін Олександр
// Лабораторна робота № 3.2
// Розгалуження, задане формулою: функція з параметрами
// Варіант 9

#include <iostream>

using namespace std;

int main() {
    double a;
    double b;
    double c;
    double x;
    double F;
    double F2;

    cout << " a: "; cin >> a;
    cout << " b: "; cin >> b;
    cout << " c: "; cin >> c;
    cout << " x: "; cin >> x;

    // Спосіб 1: скорочена форма
    if (a < 0 && x != 0) {
        F = a * (x * x) + (b * b) * x;
    }
    if (a > 0 && x == 0 && c != x) {
        F = (x - a) / (x - c);
    }
    if (!(a < 0 && x != 0) && !(a > 0 && x == 0 && c != x)) {
        F = 1 + (x / c);
    }

    cout << "1) F = " << F << endl;

    //  Спосіб 2: повна форма
    if (a < 0 && x != 0) {
        F2 = a * (x * x) + (b * b) * x;
    }
    else {
        if (a > 0 && x == 0)
        {
            F2 = (x - a) / (x - c);
        }
        else
        {
            F2 = 1 + (x / c);
        }
    }

    cout << "2) F = " << F2 << endl;

    return 0;
}