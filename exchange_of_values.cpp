
#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	std::cout << "Обмен значениями. \n";

	int a, b, c;
	std::cout << "\nВведите a: \n";
	std::cin >> a;
	std::cout << "\nВведите b: \n";
	std::cin >> b;
	c = a;
	a = b;
	b = c;
	std::cout <<" \n поменяем местами переменные с помощью дополнительной переменной \n" << "a = " << a << "\nb = " << b;

	std::cout << "\nВведите a: \n";
	std::cin >> a;
	std::cout << "\nВведите b: \n";
	std::cin >> b;
	std::swap(a, b);
	std::cout << " \n поменяем местами переменные без дополнительной переменной \n" << "a = " << a << "\nb = " << b;
}

