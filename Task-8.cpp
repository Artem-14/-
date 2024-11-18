#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double a, b, c;

    cout << "Введите сумму вклада: ";
    cin >> a;

    cout << "Введите годовую процентную ставку: ";
    cin >> b;

    c = (a * (b / 100)) / 12;

    cout << "Банк будет платить " << c << " евро в месяц." << endl;
    return 0;
}
