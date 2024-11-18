#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double R1, R2, R3, R0;
    cout << "Введите R1: ";
    cin >> R1;
    cout << "Введите R2: ";
    cin >> R2;
    cout << "Введите R3: ";
    cin >> R1 >> R2 >> R3;


    R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "Полное сопротивление R0 равно: " << R0 << endl;
    return 0;
}
