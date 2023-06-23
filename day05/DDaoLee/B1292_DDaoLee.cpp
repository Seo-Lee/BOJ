//B1292 - 쉽게 푸는 문제
#include <iostream>

using namespace std;

// ex. 13번째까지의 합은 1 22 333 4444 555 이므로 1*1 + ... 5*5 까지 더한뒤 5 * (15-13) 만큼 빼준다.
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

	// -1 해줘야함.
	cin >> a >> b;
	cout << func(b) << func(a - 1);
	
}