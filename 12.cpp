#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, i;
	bool prostoe = true;
	cout << "введите число: ";
	cin >> a;
	for (i = 2; i <= a; i++)
	{
		if (a % i == 0)
		{
			prostoe = false;
			break;
		}
	}
	if (prostoe)
		cout << "простое" << endl;
	else
		cout << "составное " << endl;
}
