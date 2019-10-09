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
	if (a > 1)
	{
		for (i = 2; i < a; i++)
		{
			if (a % i == 0)
			{
				prostoe = false;
				break;
			}
		}
	}
	if (prostoe == true)
		cout << "простое";
	else 
		cout << "составное " << endl;
}
