#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    double distance, timemin, timesec;

    cout << "Введите длину расстояния: ";
    cin >> distance;
    cout << "Введите время (например 3.25): ";
    cin >> timemin;

    timesec = (timemin - static_cast<int>(timemin)) * 100;
    timemin = static_cast<int>(timemin);

    double totaltime = timemin * 60 + timesec;
    double speedm = distance / totaltime;
    double speedkm = speedm * 3.6;

    cout << "Расстояние: " << distance << " м" << endl;
    cout << "Время: " << timemin << " мин " << timesec << " сек = " << totaltime << " секунд" << endl;
    cout << "Ты бежал на скорости " << fixed << setprecision(2) << speedkm << " км/ч" << endl;

    return 0;
}
