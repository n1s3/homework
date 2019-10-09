#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double a;
	int b;
	double r=1;
	cin >> a;
	cin >> b;
	if (b==0)
	{
		cout << 1;
	}
	else if (b==1)
	{
		cout << a;
	}
	else if (b < 0)
	{
		r = 1 / (pow(a, abs(b)));
		cout << r;
	}	
	else if (b > 0, b!=1)
	{
		for (int i = 0; i < b; i++)
			r *= a;
		cout << r;
	}
}