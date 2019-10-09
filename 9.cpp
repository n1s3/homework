#include <iostream>
#include <ctime>
int main()
{
	using namespace std;
	bool snova;
	int b;
	snova = 1;
	while (snova == 1)
	{
		srand(time(0));
		int i = rand() % 101;
		int a;
		cout << "Ya zagadal 4islo ot 0 do 100.\n";

		for (int popitka(0); popitka < 5; popitka++)
		{

			cout << "Poprobuy ugadatb:";
			cin >> a;

			if (a == i)
			{
				cout << "\nTi ygadal! Randomnoe 4islo bilo :" << a << endl;
				system("pause");
				break;
			}
			else if (a > i) cout << "\nTvoe 4islo bolbshe zagadannogo" << endl;
			if (a < i) cout << "\nTvoe 4islo menbshe zagadannogo" << endl;


			if (popitka == 4) cout << "\nTi proigral! Zagadanoe 4islo bilo:" << i << endl;
		}
		
		cout << "\nHotite na4atb sna4ala?(DA - 1)\n";
		cin >> b;
		if (snova != b) break;
		
	}
	
}