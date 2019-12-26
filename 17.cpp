#include <iostream>
#include <math.h>
using namespace std;



double BMI(double weight, double height)
{
	double BMI = weight / pow(height / 100, 2);
	if (weight <= 0 || height <= 0)
	{
		cout << "error";
	}
	return BMI;
};
	
void printBMI(double BMI) {
	if (BMI < 18.5) {
		cout << "Underweight";
	}
	else if (18.5 <= BMI && BMI < 25.0) {
		cout << "Normal";
	}
	else if (25.0 <= BMI && BMI < 30.0) {
		cout << "Overweight";
	}
	else if (30.0 <= BMI) {
		cout << " Obesity";
	};
};
	
	int main()
	{
		double weight, height;
		cout << "weight, height "; 
		cin >> weight >> height;
		printBMI(BMI(weight, height));
		return 0;
	}
