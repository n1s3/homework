#include <iostream>
int main() {
    using namespace std;
    long long int s, l1, r1, l2, r2;
    bool find(0);
    cin >> s >> l1 >> r1 >> l2 >> r2;
    for (int n = l1; n <= r1; n++) {//чтобы просмотреть диапазон чисел присваивваем начальные значения новым переменным
        for (int m = l2; m <= r2; m++)
            if (n + m = s) {
                cout << n << " " << m;
                find = 1; // когда число найдено, выходим цикла
                break; 
            }
        if (find) break; // выходим из цикла
    }
    if (!find) cout << "-1";

    return(0);
}
