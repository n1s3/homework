#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float a, b, c, D, x, x1, x2;
	setlocale(LC_ALL, "Russian");

	cout << "Дано уравнение вида: a * x * x + b * x + c = 0\n";
	cout << "Введите некоторые данные:\n";
	cout << "a = ";
	cin >> a;
	cout << "\nb = ";
	cin >> b;
	cout << "\nc = ";
	cin >> c;
	
	if (a == 0)
	{
		x = -c / b;
		cout << "\nx = " << x << endl;
	}
	else
	{
		D = b * b - 4 * a * c;
		if (D > 0)
		{
			x1 = -b + sqrt(D) / (2 * a);
			x2 = -b - sqrt(D) / (2 * a);
			cout << "\nx1 = " << x1 << "\nx2 = " << x2 << endl;
		}
		if (D < 0)
		{
			cout << "корней нет";
		}
		if (D == 0)
		{
			x = -b / (2 * a);
			cout << "\nx = " << x << endl;
		}
	}
}

