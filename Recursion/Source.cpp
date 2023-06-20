#include<iostream>
#include <conio.h>

using namespace std;

void elevator(int floor);
int factorial(int number);
int rec(int n, int d);

void main() 
{
	setlocale(LC_ALL, "");
	int floor;
	cout << "Введите номер этажа "; cin >> floor;
	elevator(floor);
	cout << endl;

	int number;
	cout << "Введите число: "; cin >> number;
	cout << "n!  =   " << factorial(number);
	cout << endl;

	int n, d;
	cout << "Введите число: "; cin >> n;
	cout << "Введите степень: "; cin >> d;

	

	




}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "Вы в подвале " << endl;
		return;
	}
	cout << "Вы на " << floor << " " << "этаже\n";
	elevator(floor - 1);
	cout << "Вы на "  << floor << " " << "этаже\n";
}

int factorial(int number)
{
	if (number == 1) return 1;

	else return number * factorial(number - 1);
}


	