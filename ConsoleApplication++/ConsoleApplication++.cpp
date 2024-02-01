#include <iostream>
#include <cmath>
using namespace std;

int main()

{
	int month;
	setlocale(LC_ALL, "RUS");
	cin >> month ;
	switch (month)
	{
	case 1: case 2: case 12:
		cout << "Это зима";
		break;
	case 3: case 4: case 5:
		cout << "Это весна";
		break;
	case 6: case 7: case 8:
		cout << "Это лето";
		break;
	case 9: case 10: case 11:
		cout << "Это осень";
		break;
	default:
		cout << "Нет такого месяца";
	}
}