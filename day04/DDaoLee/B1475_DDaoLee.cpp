//B1475 - �� ��ȣ
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int numSet[8] = { 0 };

	int roomNum;
	cin >> roomNum;

	// 9�� �����Ѵٸ�, 6�̶� �����ϰ� 6�� �߰�.
	while (roomNum) {
		
		((roomNum % 10) == 9) ? numSet[6]++ : numSet[roomNum % 10]++;
		roomNum = roomNum / 10;

	}

	// 6�� 9�� ��ü�Ͽ� ����� �� �ֱ� ������, 2���� 1��Ʈ�� ����.
	numSet[6] = (numSet[6] + 1) / 2;
	cout << *max_element(numSet, numSet + 8);

	return 0;
}