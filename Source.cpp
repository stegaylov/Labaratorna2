#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char name[20];
	char age[5];
	char learning[100];

	cout << "�� ��� �����?: " << endl;
	cin.getline(name, 20);
	cout << "������ ��� ����?: " << endl;
	cin.getline(age, 5);
	cout << "�� �� ���������?:" << endl;
	cin.getline(learning, 100);
	cout << "������� ���, " << name << endl;
	cout << "³�������, ��� ������ " << age << " � �� ��� ������ ����� � ����������!" << learning << " ���� �������� ����!" << endl;
 


}