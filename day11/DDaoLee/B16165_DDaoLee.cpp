#include <bits/stdc++.h>

using namespace std;

unordered_map<string, string> memberAndGroup;
unordered_map<string, vector<string>> groupAndMembers;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	string group_name;
	int member_num;
	string member;


	for (int i = 0; i < n; i++) {
		cin >> group_name >> member_num;

		while (member_num--) {
			cin >> member;
			memberAndGroup[member] = group_name;
			groupAndMembers[group_name].push_back(member);
		}
		sort(groupAndMembers[group_name].begin(), groupAndMembers[group_name].end());

	}

	string quiz;
	int type;

	while (m--) {
		cin >> quiz >> type;
		if (type) cout << memberAndGroup[quiz] << "\n";
		else {
			for (auto member : groupAndMembers[quiz]) cout << member << "\n";
		}
	}


	return 0;
}