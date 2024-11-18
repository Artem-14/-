#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    int seconds;

    cout << "Введите время в секундах: ";
    cin >> seconds;

    int hours = seconds / 3600;
    seconds = seconds % 3600;
    int minutes = seconds / 60;
    seconds = seconds % 60;

    cout << hours << " часов, " << minutes << " минут, " << seconds << " секунд" << endl;
    return 0;

}

