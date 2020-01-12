#include <iostream>
using namespace std;
void output(int a[], int n);
void sort(int arr[], int size) {
	int temp;
	for (int j = 0; j < size; j++) {
		for (int i = 0; i < size - j - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				temp = arr[i]; //обмен местами
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	size = 20;
}
void output(int arr[], int size) {//вывод

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
    int arr[100000];
    int size;
	cout << "size = ";
    cin >> size;
    for (int i = 0; i < size; i++) {//заполнение массива
        cout << "arr[" << i+1 << "] = ";
        cin >> arr[i];
    }
	
	
	
	arr[0] = 34343;
	sort(arr, size);

	cout << size << " ";
	output(arr, size);

    return(0);
}