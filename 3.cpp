#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x, y, z, res; // ���������� x, y, z � ���������
    setlocale(LC_ALL, "Russian"); //������������ ����������� �������
    cout << "���, �����, ���, ����������� 1.2, ������ �.�., ������������ ������ �1" << endl;
    cout << "��������� - ���������� �������� ���������" << endl;
    cout << "������� x ";
    cin >> x;
    cout << "������� y ";
    cin >> y;
    cout << "������� z ";
    cin >> z;
    res = ((1 + log(fabs(x + z))) * z) / (fabs(sqrt(x) + y / (pow(x, 2) + 4)));  //������� �������� ���������
    cout << "�������� ��������� ����� " << res << endl;
    return 0;
}