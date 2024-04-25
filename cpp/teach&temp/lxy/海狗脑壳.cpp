#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int, double, greater<int>> poly;
    double coef;
    int exp;
    char ch;

    for (int i = 0; i < 2; ++i) {
        do {
            cin >> coef >> ch >> exp;
            if (exp != 0 || coef != 0) {
                poly[exp] += coef;
            }
        } while (exp != 0 || coef != 0);
    }

    for (auto &p : poly) {
        if (p.second != 0) {
            cout << p.second << "^" << p.first << " ";
        }
    }

    return 0;
}