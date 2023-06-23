//B1919 - 애너그램 만들기
#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s1, s2;
	cin >> s1 >> s2;

	cout << int('a');

	char alpha[26] = {0};
	
	// 첫 문자열과 두 번째 문자열에 같은 문자열이 존재한다면, +- 가 되어서 0이 됨.
	// 서로 중복되어 보유하지 않은 문자들이라면, 절댓값으로 제외해줘야 할 문자의 양을 모두 더해줌.
	for (char i : s1) {
		alpha[(int)i - 97]++;
	}
	for (char i : s2) {
		alpha[(int)i - 97]--;
	}
	int sum = 0;
	for (int i : alpha) {
		sum += abs(i);
		cout << i << "\n";
	}
	cout << sum;
	return 0;
}