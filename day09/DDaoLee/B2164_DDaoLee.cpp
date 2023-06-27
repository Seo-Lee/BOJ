#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	if (n == 1) cout << 1;
	else {
		queue<int> Q;

		for (int i = 1; i < n + 1; i++) Q.push(i);

		int tmp;


		while (true) {

			Q.pop();

			if (Q.size() == 1) break;

			tmp = Q.front();
			Q.pop();
			Q.push(tmp);

		}

		cout << Q.front();
	}

	return 0;
}