#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	deque<int> D;

	while (n--) {
		string order;
		cin >> order;

		if (order == "push_front") {
			int add;
			cin >> add;
			D.push_front(add);
		}
		else if (order == "push_back") {
			int add;
			cin >> add;
			D.push_back(add);
		}
		else if (order == "pop_front") {
			if (D.empty()) cout << -1 << "\n";
			else {
				cout << D.front() << "\n";
				D.pop_front();
			}
		}
		else if (order == "pop_back") {
			if (D.empty()) cout << -1 << "\n";
			else {
				cout << D.back() << "\n";
				D.pop_back();
			}
		}
		else if (order == "size") {
			cout << D.size() << "\n";
		}
		else if (order == "empty") {
			if (D.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (order == "front") {
			if (D.empty()) cout << -1 << "\n";
			else cout << D.front() << "\n";
		}
		else {
			if (D.empty()) cout << -1 << "\n";
			else cout << D.back() << "\n";
		}
	}
	return 0;
}