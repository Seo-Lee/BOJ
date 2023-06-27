#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<char> stk;

	int add, total;
	add = total = 0;

	string stick;
	cin >> stick;
	for (auto c : stick) {
		if (c == '(') {
			if (!(stk.empty()) && stk.top() == '(') add++;
		}
		else {
			if (stk.top() == '(') total += add;
			else {
				total += 1;
				add--;
			}

		}
		stk.push(c);
	}
	cout << total;

	return 0;
}