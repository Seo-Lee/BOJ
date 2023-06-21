//B11653 - 소인수분해
#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	// 2부터 나눠볼 만큼 충분히 나누어보고 다음으로 넘어감.
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				cout << i << '\n';
				n /= i;
			}
		}
		if (n != 1) cout << n;

	return 0;
}