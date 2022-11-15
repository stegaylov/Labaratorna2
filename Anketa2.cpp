#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	char surname[15];
	char name[15];
	char secondname[15];
	char sex[15];
	char date[15];
	char adress[50];
	char phone[15];
	char learning[50];
	char group[15];
	char hobby[50];

	cout << "Введіть ваше призвіще: " << endl;
	cin.getline(surname, 15);
	cout << "Введіть ваше ім'я: " << endl;
	cin.getline(name, 15);
	cout << "Як вас по батькові?: " << endl;
	cin.getline(secondname, 15);
	cout << "Яка у вас стать?: " << endl;
	cin.getline(sex, 15);
	cout << "Дата вашого народження?:" << endl;
	cin.getline(date, 15);
	cout << "Адресса вашого проживання: " << endl;
	cin.getline(adress, 50);
	cout << "Ваш номер мобільного: " << endl;
	cin.getline(phone, 15);
	cout << "Де ви навчаєтесь?: " << endl;
	cin.getline(learning, 50);
	cout << "Із якої ви группи?: " << endl;
	cin.getline(group, 15);
	cout << "Чи є у вас хоббі?: " << endl; 
	cin.getline(hobby, 50);

	cout << "Призвіще: " << surname << endl;
	cout << "Ім'я: " << name << endl;
	cout << "По батькові: " << secondname << endl;
	cout << "Номер телефону: " << phone << endl;
	cout << "Хоббі: " << hobby << endl;
	cout << "Місце навчання: " << learning<< endl;
	cout << "Группа в якій навчаєтесь: " << group << endl;
	cout << "Дата народження: " << date << endl;
	cout << "Стать: " << sex << endl;
	cout << "Де ви проживаєте:" << adress << endl;
}