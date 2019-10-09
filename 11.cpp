#include <iostream>
using namespace std;
int main()
{
	int a;
	int x = 1;
	cout << "Vvedite !a: "; 
	cin >> a;
	for (int i = 1; i < a + 1; ++i)
		x *= i;
	cout << a << "!" << " = " << x << endl; 
}