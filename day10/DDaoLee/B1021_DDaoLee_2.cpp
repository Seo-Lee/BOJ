#include <bits/stdc++.h>

using namespace std;

int func1(deque<int>& D) {
	int val = D.front();
	D.pop_front();
	return val;
}

void func2(deque<int>& D) {
	int tmp = D.front();
	D.pop_front();
	D.push_back(tmp);
}

void func3(deque<int>& D) {
	int tmp = D.back();
	D.pop_back();
	D.push_front(tmp);
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	deque<int> dq;

	for (int i = 1; i <= n; i++) dq.push_back(i);

	int min = 0;
	int cnt1 = 0, cnt2 = 0, tmp = 0;
	int add = 1;
	int ans;

	for (int i = 0; i < m; i++) {
		cin >> ans;

		for (int i = 0; i < n; i++) {

			if (dq.front() == ans) add--;
			func2(dq);
			cnt1 += add;
		}
		add++;
		for (int i = 0; i < n; i++) {
			if (dq.front() == ans) {
				func1(dq);
				break;
			}
			func3(dq);
			cnt2 += add;
		}

		n--;
		//cout << cnt1 << " " << cnt2 << "\n";
		(cnt1 < cnt2) ? min += cnt1 : min += cnt2;
		cnt1 = cnt2 = 0;
	}

	cout << min;

	return 0;
}