#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int a, n;
	bool prostoe = true;
	cout << "введите число: ";
	cin >> a;
	for (n = 2; n <= (sqrt(abs(a))); n++)
	{
		if (a % n == 0)
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