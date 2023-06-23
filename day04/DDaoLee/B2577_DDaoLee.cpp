//B2577 - 숫자의 개수
#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	// 배열은 (1000*1000*1000) / 10 만큼 필요
	int mul[10] = {0};

	int a, b, c;
	cin >> a >> b >> c;
	int tmp = a * b * c;

	while (tmp) {
		mul[tmp % 10]++;
		tmp = tmp / 10;
	}

	for (int i = 0; i < 10; i++) cout << mul[i] << "\n";

	return 0;
}