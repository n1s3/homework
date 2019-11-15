#include <math.h>
#include <iostream>

using namespace std;

int sort(int* arr, int size) {
	int temp;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return *arr;
}

int main()
{
	int n;
	cout << "Enter n:\n";
	cin >> n;
	int* arr = new int[n]; //память
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, n);
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (counter < 5) {
			counter++;
		};
		for (int j = 0; j < counter; j++) {
			cout << arr[counter-j-1] << " ";
		};
		cout << endl;
	};
	delete[] arr; // очистка памяти
}

