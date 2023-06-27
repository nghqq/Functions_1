#include<iostream>
#include <conio.h>

using namespace std;

void elevator(int floor);
int factorial(int number);
double power(int n, int d);
void fibba(long long  int a, long long int b = 0 , long long int c = 1);


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
	cout << power(n, d);
	int a, b, c;
	cout << fibba(a, b,c);
	

	

	




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
	if (number == 0) return 1;

	else return number * factorial(number - 1);
}

double power(int n, int d) 
{
	//if (d == 0) return 1;



	//else if (d > 0)  return power(n, d - 1) * n;
	//else return 1 / power(n, -d);
	return n == 0 ? 1 :  d > 0 ? n * power(n, d - 1) : 1/power(n, -d);
	
}
void fibba(long long int a, long long int b, long long int c)
{
	if (b > a) return;
	cout << b << "\n";
	fibba(a, c, b + c);
}


	