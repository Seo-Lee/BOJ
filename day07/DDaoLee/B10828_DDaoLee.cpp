#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;
	stack<int> stk;

	while (n--) {

		string str;
		cin >> str;

		if (str == "push") {
			int add;
			cin >> add;
			stk.push(add);
		}
		else if (str == "pop") {
			if (!stk.empty()) {
				cout << stk.top() << "\n";
				stk.pop();
			}
			else cout << -1 << "\n";

		}
		else if (str == "size") {
			cout << stk.size() << "\n";
		}
		else if (str == "empty") {
			cout << (int)stk.empty() << "\n";
		}
		else {
			if (stk.empty()) cout << -1 << "\n";
			else cout << stk.top() << "\n";
		}
	}

	return 0;
}