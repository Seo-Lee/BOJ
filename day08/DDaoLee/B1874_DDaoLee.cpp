#include <bits/stdc++.h>

using namespace std;

int arr[100005];
stack<int> stk;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	string opp;

	int tmp;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr[i] = tmp;
	}

	int cnt = 1;
	int idx = 0;

	while (cnt < n + 1) {

		stk.push(cnt);
		opp += "+\n";

		while (!(stk.empty()) && (stk.top() == arr[idx])) {
			stk.pop();
			opp += "-\n";
			idx++;
		}

		cnt++;
	}

	if (!(stk.empty())) cout << "NO";
	else cout << opp;

	return 0;
}