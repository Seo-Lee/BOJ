#include<iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	int sum = 0;
	int min = 100; //�ڿ����� 100���� �۱� ����.

	for (int i = 0; i < 7; i++) {
		cin >> num;
		if (num % 2 == 1) {
			if (num < min) min = num;
			sum = sum + num;
		}
	}

	(sum != 0) ? (cout << sum << "\n" << min) : (cout << -1);

	return 0;
}