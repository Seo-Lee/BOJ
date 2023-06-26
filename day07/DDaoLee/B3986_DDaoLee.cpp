#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, cnt;
	cin >> n;
	cnt = 0;

	while (n--) {
		string S;
		cin >> S;

		stack<char> stk;

		for (char c : S) {
			if ((stk.empty()) || stk.top() != c) {
				stk.push(c);
			}
			else if (stk.top() == c) stk.pop();
		}

		if (stk.empty()) cnt++;
	}

	cout << cnt;
	return 0;
}