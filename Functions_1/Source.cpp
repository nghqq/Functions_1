#include<iostream>
using namespace std;
int Add(int a = 0, int b = 0, int c = 0); // b �������� �� ��������� ������ ��� � ���� ���� �������� 0;
int Mul(int a, int b); // �������� �������
int Sub(int a, int b);
double Div(int a, int b);

// Default arguments, Default parameters

void main()
{
	setlocale(LC_ALL, "");

	double a, b;

	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a,b); // ����� (�������������) ������� (Function Call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;
}
int Add(int a, int b, int c) // ���������� ������� (����������� �������) Function definition
{
// Addition - ��������
	int c = a + b;
	int sum = a + b + c;
	return sum;
}

int Sub(int a, int b) 
{
//Subtraction - ���������
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

