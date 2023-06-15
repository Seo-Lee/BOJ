// BOJ 2441 º° Âï±â -4
#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {

        for (int j = 0; j < i; j++) cout << " ";
        for (int k = 0; k < num - i; k++) cout << "*";

        cout << "\n";
    }

    return 0;
}