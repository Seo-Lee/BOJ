// BOJ 2562 ÃÖ´ñ°ª
#include <iostream>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int num, idx;
    int max = 0;

    for (int i = 1; i < 10; i++) {

        cin >> num;
        if (num > max) {
            max = num;
            idx = i;
        }
    }

    cout << max << "\n" << idx;

    return 0;
}