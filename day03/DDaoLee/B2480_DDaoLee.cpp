//B2480 - 주사위 세개
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int dice[3];
	cin >> dice[0] >> dice[1] >> dice[2];

	sort(dice, dice + 3);

	if (dice[0] == dice[2]) cout << 10000 +  dice[0] * 1000;
	else if (dice[0] == dice[1] || dice[1] == dice[2]) cout << 1000 + dice[1] * 100;
	else cout << dice[2] * 100;

	return 0;
}