//B1475 - 방 번호
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int numSet[8] = { 0 };

	int roomNum;
	cin >> roomNum;

	// 9가 존재한다면, 6이라 생각하고 6에 추가.
	while (roomNum) {
		
		((roomNum % 10) == 9) ? numSet[6]++ : numSet[roomNum % 10]++;
		roomNum = roomNum / 10;

	}

	// 6은 9를 대체하여 사용할 수 있기 때문에, 2개를 1세트로 생각.
	numSet[6] = (numSet[6] + 1) / 2;
	cout << *max_element(numSet, numSet + 8);

	return 0;
}