#include<iostream>
using namespace std;


void main() 
{
	setlocale(LC_ALL, "");

	const int n = 5;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
}
