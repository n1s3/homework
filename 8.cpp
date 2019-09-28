#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float a, b, d;
	char c;
	cin >> a >> c >> b;
	if (c == '+')
	{
		cout << a + b;
	}
	if (c == '-')
	{
		cout << a - b;
	}
	if (c == '*')
	{
		cout << a * b;
	}
	if (c == '/')
	{
		if (b == 0)
		{
			cout << "деление на ноль";
		}
		else
		cout << a / b;

	}
	
}