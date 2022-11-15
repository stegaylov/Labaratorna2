#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a(10);
    float b(10);
    float x(10);

    cout << "Введіть дві різних цифри:" << endl;
    cout << "A: ";
    cin >> a;
    cout << "B: ";
    cin >> b;
    cout << "Тепер поміняймо їх місцями:" << endl; 
    x = b; b = a; a = x;
    cout << "\nA: " << a << endl;
    cout << "B: " << b << endl;
}