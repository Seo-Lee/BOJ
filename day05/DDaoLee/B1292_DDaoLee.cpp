//B1292 - ���� Ǫ�� ����
#include <iostream>

using namespace std;

// ex. 13��°������ ���� 1 22 333 4444 555 �̹Ƿ� 1*1 + ... 5*5 ���� ���ѵ� 5 * (15-13) ��ŭ ���ش�.
int func(int num) {
	int n = 0;
	int sum = 0;
	int tmp = 0;
	while (true) {
		tmp += 1;
		n += tmp;
		sum += (tmp) * (tmp);
		if (n > num) {
			sum -= tmp * (n - num);
			break;
		}
	}
	
	return sum;
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b;

	// -1 �������.
	cin >> a >> b;
	cout << func(b) << func(a - 1);
	
}