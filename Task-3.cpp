#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double v, t, a, S;

    cout << "Введите скорость: ";
    cin >> v;
    cout << "Введите время: ";
    cin >> t;
    cout << "Введите ускорение: ";
    cin >> a;

    S = v * t + (a * t * t) / 2;

    cout << "Пройденное расстояние составляет: " << S << " метров" << endl;
    return 0;
}

