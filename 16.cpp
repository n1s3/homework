#include <iostream>
using namespace std;
void factorization(int n)
{
    int del = 2;
    cout << n << " = ";
    while (n > 1) {
        int m = 0;
        while (n % del == 0) {//пока остаток ноль
            m++;//суммеруем для нахождения степени
            n = n / del;
        }//завершается когда нет нулевого остатка
        if (m > 0) {
            cout << del;
            if (m > 1) cout << "^" << m;
            else cout << "*";
        }
        if (del == 2) del++;
        else del += 2;//получение простых чисел
    }
    cout << endl;
}
int main(){

    int n;
    cout << "n = ";
    cin >> n;
    factorization(n);
}
 