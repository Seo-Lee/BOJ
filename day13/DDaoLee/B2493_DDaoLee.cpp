#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	stack<int> signal;
	unordered_map<int, int> location;

	int tower;
	int loc = 1;
	while (N--) {
		cin >> tower;
		location[tower] = loc;
		loc++;
		while (true) {
			if (signal.empty()) {
				signal.push(tower);
				cout << 0 << " ";
				break;
			}
			else if (signal.top() < tower) signal.pop();
			else {
				cout << location[signal.top()] << " ";
				signal.push(tower);
				break;
			}
		}
	}

	return 0;
}