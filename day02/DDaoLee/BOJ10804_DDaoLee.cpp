#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int num[21];

	for (int i = 1; i < 21; i++) num[i] = i;

	int num1, num2, tmp;

	for (int i = 0; i < 10; i++) {
		cin >> num1 >> num2;
		for (int j = 0; j < (num2 - num1 + 1) / 2; j++) {
			tmp = num[num1 + j];
			num[num1 + j] = num[num2 - j];
			num[num2 - j] = tmp;
		}
	}

	for (int i = 1; i < 21; i++) cout << num[i] << ' ';

	return 0;
}