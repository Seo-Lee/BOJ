#include <bits/stdc++.h>

using namespace std;

const int MX = 1000005;
int dat[2 * MX + 1];
int head = MX, tail = MX;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	while (n--) {
		string order;
		cin >> order;

		if (order == "push_front") {
			int add;
			cin >> add;
			dat[--head] = add;
		}
		else if (order == "push_back") {
			int add;
			cin >> add;
			dat[tail++] = add;
		}
		else if (order == "pop_front") {
			if (head == tail) cout << -1 << "\n";
			else cout << dat[head++] << "\n";
		}
		else if (order == "pop_back") {
			if (head == tail) cout << -1 << "\n";
			else cout << dat[--tail] << "\n";
		}
		else if (order == "size") {
			cout << tail - head << "\n";
		}
		else if (order == "empty") {
			if (head == tail) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (order == "front") {
			if (head == tail) cout << -1 << "\n";
			else cout << dat[head] << "\n";
		}
		else {
			if (head == tail) cout << -1 << "\n";
			else cout << dat[tail - 1] << "\n";
		}
	}
	return 0;
}