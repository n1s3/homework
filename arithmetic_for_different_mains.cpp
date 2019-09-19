

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");

	int a, b;
	double c, d; 
	std::cout << " Арифметика для разных типов. \n";

	std::cout << "Введите две целые переменные: \n";
	std::cin >> a >> b;
	std::cout << "\n" << a << "+" << b << "=" << a + b;
	std::cout << "\n" << a << "-" << b << "=" << a - b;
	std::cout << "\n" << a << "*" << b << "=" << a * b;
	std::cout << "\n" << a << "/" << b << "=" << a / b;

	std::cout << "\n" << "Введите две  дробные переменные: \n";
	std::cin >> c >> d;
	std::cout << "\n" << c << "+" << d << "=" << c + d;
	std::cout << "\n" << c << "-" << d << "=" << c - d;
	std::cout << "\n" << c << "*" << d << "=" << c * d;
	std::cout << "\n" << c << "/" << d << "=" << c / d;

	std::cout << "\n" << "Введите сначала целую переменную, а потом дробную: \n";
	std::cin >> a >> c;
	std::cout << "\n" << a << "+" << c << "=" << a + c;
	std::cout << "\n" << a << "-" << c << "=" << a - c;
	std::cout << "\n" << a << "*" << c << "=" << a * c;
	std::cout << "\n" << a << "/" << c << "=" << a / c;

	std::cout << "\n" << "Введите сначала дробную переменную, а потом целую: \n";
	std::cin >> d >> b;
	std::cout << "\n" << d << "+" << b << "=" << d + b;
	std::cout << "\n" << d << "-" << b << "=" << d - b;
	std::cout << "\n" << d << "*" << b << "=" << d * b;
	std::cout << "\n" << d << "/" << b << "=" << d / b << "\n\n";
}

