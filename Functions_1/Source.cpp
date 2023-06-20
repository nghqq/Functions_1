#include<iostream>
using namespace std;
int Add(int a = 0, int b = 0, int c = 0); // b параметр по умолчанию потому что у него есть значение 0;
int Mul(int a, int b); // ПРОТОТИП ФУНКЦИИ
int Sub(int a, int b);
double Div(int a, int b);

// Default arguments, Default parameters

void main()
{
	setlocale(LC_ALL, "");

	double a, b;

	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a,b); // Вызов (использование) функции (Function Call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}
int Add(int a, int b, int c) // Реализация функции (Определение функции) Function definition
{
// Addition - Сложение
	int c = a + b;
	int sum = a + b + c;
	return sum;
}

int Sub(int a, int b) 
{
//Subtraction - вычитание
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
double Div(int a, int b)
{
	return(double) a / b;
}

