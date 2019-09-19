#include <iostream>
using namespace std;
int main()
{
	std::cout << "Простой вывод. \n";

	setlocale(LC_ALL, "Russian");
	int a;
	a = 2 * 2;
	a = a + 2;
	std::cout << "Результат вычисления выражения 2+2*2 = " << a << endl;	
}

