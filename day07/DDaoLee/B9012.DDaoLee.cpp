#include <bits/stdc++.h>

using namespace std;

int main() {

	int n;
	cin >> n;

	while (n--) {

		stack<char> stk;

		string s;
		cin >> s;
		for (char c : s) {
			if (c == '(') stk.push(c);
			else {
				if (stk.empty() || stk.top() != '(') {
					stk.push(c);
					break;
				}
				else stk.pop();
			}
		}

		if (stk.empty()) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}