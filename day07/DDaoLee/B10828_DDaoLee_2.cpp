#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int stk[MX];
int pos = 0;

void push(int x) {
	stk[pos++] = x;
}

void pop() {
	if (pos != 0) {
		pos--;
		cout << stk[pos] << "\n";
	}
	else cout << -1 << "\n";
}

void size() {
	cout << pos << "\n";
}

void empty() {
	if (pos == 0) cout << 1 << "\n";
	else cout << 0 << "\n";
}

void top() {
	if (pos == 0) cout << -1 << "\n";
	else cout << stk[pos - 1] << "\n";
}
int main() {

	int n;
	cin >> n;

	while (n--) {

		string str;
		cin >> str;

		if (str == "push") {
			int add;
			cin >> add;
			push(add);
		}
		else if (str == "pop") {
			pop();

		}
		else if (str == "size") {
			size();

		}
		else if (str == "empty") {
			empty();
		}
		else if (str == "top") {
			top();
		}
	}

	return 0;
}