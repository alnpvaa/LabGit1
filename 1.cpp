#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n1, n2; //������ � ������ ��������� ����� 
    double res; //��������� 
    setlocale(LC_ALL, "Russian"); //������������ ����������� �������
    cout << "���, �����, ���, ����������� 1.2, ������ �.�., ������������ ������ �1" << endl;
    cout << "��������� �������� ������ �� �����" << endl;
    cout << "������� ��� ����� ����� - ��������� ������ � ������ ������ � ���������" << endl
        << "������� ������ ����� - ��������� ������ ";
    cin >> n1;
    cout << "������� ������ ����� - ������ ������ � ��������� ";
    cin >> n2;
    res = n1 - n1 * 0.13;  //���������� ��������� �� �������
    res = round(res * 100) / 100; //���������� �� ������� ����� ����� �������
    cout << n1 * n2 << endl;//���������� ���������
    cout << "������� ���������� " << n1 << " � ������ ������ " << n2 << " ��������� ����� ������ " << res << "." << endl;
    return 0;
}