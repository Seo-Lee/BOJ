#include <bits/stdc++.h>

using namespace std;

int a_arr[1000000];

int main() {

	ios::sync_with_stdio();
	cin.tie(0);

	int n;
	cin >> n;
	stack<int> chk_o;
	vector<int> ans;
	int a;
	
	for (int i = 0; i < n; i++) {
		cin >> a;
		a_arr[i] = a;
	}


	while (n--) {
		while (true) {
			if (chk_o.empty()) {
				ans.push_back(-1);
				chk_o.push(a_arr[n]);
				break;
			}
			else if (chk_o.top() <= a_arr[n]) chk_o.pop();
			else { //chk_o.top() >= a_arr[n]
				ans.push_back(chk_o.top());
				chk_o.push(a_arr[n]);
				break;
			}
		}
	}
	reverse(ans.begin(), ans.end());
	for (auto i : ans) cout << i << " ";
	return 0;
}