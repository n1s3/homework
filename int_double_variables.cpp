#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Переменные int и double. \n";

	
	int a = 3, b = 3.14;
	double c = 3, d = 3.14;
	cout << "Целочисленные переменные:\n" << "1. " << a << "\n" << "2. " << b << "\n";
	cout << "Дробные переменные:\n" << "1. " << c << "\n" << "2. " << d << "\n\n";
}