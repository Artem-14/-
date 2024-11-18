#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double L, R, S;
    double pi = 3.14159265359;

    cout << "Введите длину окружности круга: ";
    cin >> L;

    R = L / (2 * pi);
    S = pi * R * R;

    cout << "Площадь круга равна: " << S << endl;
    return 0;
}


