#include <bits/stdc++.h>

using namespace std;

unordered_map<string, int> poke_dict;
const int MX = 100005;
string poke[MX];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> poke[i];
		poke_dict[poke[i]] = i;
	}

	string input;
	while (m--) {
		cin >> input;
		if (isdigit(input[0])) cout << poke[stoi(input)] << "\n";
		else cout << poke_dict[input] << "\n";
	}

	return 0;
}