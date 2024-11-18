#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");

    double doll, cent;
    int a;

    cout << "Введите число: ";
    cin >> doll;

    a = doll;
    cent = (doll - a) * 100;
 
    cout << a << " долларов и " << cent << " центов" << endl;
    return 0;

}

