//B11653 - ���μ�����
#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	// 2���� ������ ��ŭ ����� ������� �������� �Ѿ.
		for (int i = 2; i <= n; i++) {
			while (n % i == 0) {
				cout << i << '\n';
				n /= i;
			}
		}
		if (n != 1) cout << n;

	return 0;
}