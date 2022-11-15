#include <iostream>
#include <Windows.h>

using namespace std;

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	float a(10);
	float b(10);
	float c(10);
	float d(10);
	float x(10);

	cout << "Введіть чотири різних цифри: " << endl;
	cout << "A: ";
	cin >> a;
	cout << "B: ";
	cin >> b;
	cout << "C: ";
	cin >> c;
	cout << "D: ";
	cin >> d;
	cout << "Тепер змінимо їх місцями: " << endl;
	x = d; d = c; c = b; b = a; a = x;
	cout << "A: " << a << endl;
	cout << "B: " << b << endl;
	cout << "C: " << c << endl;
	cout << "D: " << d << endl;


}