#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float x (100);

	cout << "\n\n\n\n\n\n\n\n\t\t\t\tДоброго дня, загадайте будь-яке число від 1 до 100\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tЗадане число помножте на 10\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tРезультат поділіть на 2\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\tВід того що у вас вийшло відніміть 5\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tДо результату додайте 4\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\t\tВведіть число яке у вас вийшло:";
	cin >> x;
	system("cls");
	cout << "\n\n\n\n\n\n\n\n\t\t\t\t\tЧисло що ви загадали спочатку це: " << ((((x - 4) + 5) * 2) / 10) << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n" << endl;
	system("pause");
	system("cls");
}