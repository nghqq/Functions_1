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
	cout << "������� ����� ����� "; cin >> floor;
	elevator(floor);
	cout << endl;

	int number;
	cout << "������� �����: "; cin >> number;
	cout << "n!  =   " << factorial(number);
	cout << endl;

	int n, d;
	cout << "������� �����: "; cin >> n;
	cout << "������� �������: "; cin >> d;

	

	




}

void elevator(int floor)
{
	if (floor == 0)
	{
		cout << "�� � ������� " << endl;
		return;
	}
	cout << "�� �� " << floor << " " << "�����\n";
	elevator(floor - 1);
	cout << "�� �� "  << floor << " " << "�����\n";
}

int factorial(int number)
{
	if (number == 1) return 1;

	else return number * factorial(number - 1);
}


	