#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x, y, z, res; // переменные x, y, z и результат
    setlocale(LC_ALL, "Russian"); //переключение локализации консоли
    cout << "ТПУ, ИШИТР, ОИТ, Информатика 1.2, Попова А.А., Лабораторная работа №1" << endl;
    cout << "Программа - вычисление значения выражения" << endl;
    cout << "Введите x ";
    cin >> x;
    cout << "Введите y ";
    cin >> y;
    cout << "Введите z ";
    cin >> z;
    res = ((1 + log(fabs(x + z))) * z) / (fabs(sqrt(x) + y / (pow(x, 2) + 4)));  //подсчёт значения выражения
    cout << "Значение выражения равно " << res << endl;
    return 0;
}