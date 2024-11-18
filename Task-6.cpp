#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    int day;

    cout << "Введите количество дней: ";
    cin >> day;

    int week = day / 7;
    int day1 = day % 7;

    cout << week << " недель и " << day1 << " дней" << endl;
    return 0;
}