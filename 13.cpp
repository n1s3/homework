#include <math.h>
#include <iostream>

int main()
{
	using namespace std;
	int n,result, i = 0;
	cin >> n;
	while (n > 0) {
		n = n - pow(2, i);
//		cout << pow(2, i) << " " ;
		i++;
	};
	cout << endl << "Count of numbers: " << i;
}