#include <iostream>
#include <cmath>
#include <math.h>
int main()
{
	using namespace std;
	double s, S, met, p, P, a, b, c, ay, by, cy, a1, b1, c1;
	bool method = 1;
	cout << "choose a data entry method: 1 or 2 \n";
	cin >> met;
	if (met == method)
	{
		cout << "Enter the data:\na="; cin >> a;
		cout << "\nb="; cin >> b;
		cout << "\nc="; cin >> c;
		p = (a + b + c) / 2;
		s = sqrt(p * (p - a)*(p - b)*(p - c));
		cout << "S=" << s;
	}
	else if (method != met)
	{
		cout << "Enter the data:\nA(x;y) ="; cin >> a >> ay;
		cout << "\nB(x;y) ="; cin >> b >> by;
		cout << "\nC(x;y) ="; cin >> c >> cy;
		a1 = sqrt(pow(b - a, 2) + pow(by - ay, 2));
		if (a < 0) { cout << "size a < 0" << endl; return 0; }
		b1 = sqrt(pow(c - b, 2) + pow(cy - by, 2));
		if (b < 0) { cout << "size b < 0" << endl; return 0; }
		c1 = sqrt(pow(a - c, 2) + pow(ay - cy, 2));
		if (c < 0) { cout << "size c < 0" << endl; return 0; }
		P = (a1 + b1 + c1) / 2;
		S = sqrt(P * (P - a1) * (P - b1) * (P - c1));
		cout << "S=" << S;
	}
}