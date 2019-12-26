#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int arr[20], max, min;
	for (int i = 0; i < 20; i++)
	{
		arr[i] = rand() % 201 - 100;
		cout << arr[i] << " ";
	}
	max = arr[0];
	min = arr[0];
	for (int i = 0; i < 20; i++) {
		if (max < arr[i]) { max = arr[i]; };
		if (min > arr[i]) { min = arr[i]; };
	}
	cout << "\n" << min;
	cout << "\n" << max;
}