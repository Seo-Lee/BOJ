//B2309 - �ϰ� ������
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int height[9];
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> height[i];
		sum = sum + height[i];
	}

	sort(height, height + 9);

	// 9���� Ű�� �տ��� 100�� �� ���� �̿��Ѵ�.
	int sub[9];
	int diff = sum - 100;
	for (int i = 0; i < 9; i++) {
		sub[i] = diff - height[i];
	}

	int num1, num2;

	// �� ���� Ű ���� �� diff ���� �����ϴٸ�, ���� �����ϰ� ���
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sub[i] == height[j]) {
				num1 = i, num2 = j;
				break;
			}
		}
	}

	for (int i = 0; i < num1; i++) cout << height[i] << "\n";
	for (int i = num1 + 1; i < num2; i++) cout << height[i] << "\n";
	for (int i = num2 + 1; i < 9; i++) cout << height[i] << "\n";

	return 0;
}