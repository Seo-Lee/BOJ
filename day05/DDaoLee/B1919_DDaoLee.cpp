//B1919 - �ֳʱ׷� �����
#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s1, s2;
	cin >> s1 >> s2;

	cout << int('a');

	char alpha[26] = {0};
	
	// ù ���ڿ��� �� ��° ���ڿ��� ���� ���ڿ��� �����Ѵٸ�, +- �� �Ǿ 0�� ��.
	// ���� �ߺ��Ǿ� �������� ���� ���ڵ��̶��, �������� ��������� �� ������ ���� ��� ������.
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