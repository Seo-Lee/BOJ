#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[MX];
int head = 0, tail = 0;

void push(int x) {
	dat[tail++] = x;
}

void pop() {
	if (head == tail) {
		cout << -1 << "\n";
	}
	else cout << dat[head++] << "\n";
}

void front() {
	if (head == tail) cout << -1 << "\n";
	else cout << dat[head] << "\n";
}

void back() {

	if (head == tail) cout << -1 << "\n";
	else cout << dat[tail - 1] << "\n";
}

void size() {
	cout << tail - head << "\n";
}

void empty() {
	if (head == tail) cout << 1 << "\n";
	else cout << 0 << "\n";
}


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

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
		else if (str == "front") {
			front();
		}
		else {
			back();
		}
	}



	return 0;
}