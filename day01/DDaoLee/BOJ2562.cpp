// BOJ 2562 ¿∑≥Ó¿Ã
#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 12;
    int sum = 0;
    int tmp;

    while (cnt--) {

        cin >> tmp;
        sum = sum + tmp;
        if (!(cnt % 4)) {
            (sum != 4) ? cout << char(68 - sum) << "\n" : cout << "E\n";
            sum = 0;
        }
    }

    return 0;
}