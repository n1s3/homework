#include <iostream>
using namespace std;
int main() {
	bool find(0);
	int s, l1, r1, l2, r2, l22;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	if (l1 <= r1 && l2 <= r2)
	{
		for ( ; l1 <= r1; l1++)
		{
			for (l22 = l2; l22 <= r2; l22++)
			{
				if (l1 + l22 == s)
				{
					cout << l1 << ' ' << l22 << endl;
					find = 1;
					break;
				}
				else if (l1 == r1 && l22 == r2 && l1 + l22 != s) cout << -1 << endl;
			}
			if (find == 1) break;
		}

	}
	else cout << "na4alo otrezka ne mojet bitb bolbshe konca";
	return 0;
}