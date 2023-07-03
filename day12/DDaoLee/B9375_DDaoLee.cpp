#include <bits/stdc++.h>

using namespace std;

string closet_code[31];

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int test_case;
	int n, cnt = 1;
	string closet_item;
	string closet_type;

	cin >> test_case;

	while (test_case--) {
		cin >> n;

		unordered_map<string, int> closet;

		while (n--) {

			cin >> closet_item >> closet_type;
			closet[closet_type]++;
		}

		for (auto i : closet) cnt *= i.second + 1;	
		cout << cnt - 1 << "\n";
		cnt = 1;
	}


	return 0;

}