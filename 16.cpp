#include <iostream>
using namespace std;
void factorization(int n)
{
	int div = 2;
	cout << n << " = ";
	while (n > 1)
	{
		int m = 0;
		while (n % div == 0)
		{
			m++;
			n = n / div;
		}
		if (m > 0)
		{
			cout << div;
			if (m > 1) cout << "^" << m;
			if (n > 1) cout << "*";
		}
		if (div == 2) div++;
		else div += 2;
	}
	cout << endl;
	cin.get(); cin.get();
}
int main() {
	int n;
	cout << "n = ";
	cin >> n;
	factorization(n);
	return 0;
}