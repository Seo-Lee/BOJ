#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	map<string, string> com;
	string a, b;
	while (n--) {
		cin >> a >> b;
		com[a] = b;
	}

	deque<string> dq;
	for (auto emp : com) {
		if (emp.second == "enter") dq.push_back(emp.first);
	}

	while (!(dq.empty())) {
		cout << dq.back() << "\n";
		dq.pop_back();
	}

	return 0;
}