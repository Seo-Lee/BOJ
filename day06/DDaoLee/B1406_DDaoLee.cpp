#include <bits/stdc++.h>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	list<char> editor = {};

	string s;
	cin >> s;
	for (auto c : s) editor.push_back(c);

	// cursor = 1;
	list<char>::iterator cursor = editor.end();

	int n;
	cin >> n;
	while (n--) {
		char op;
		cin >> op;

		if (op == 'L') {
			if (cursor != editor.begin()) cursor--;
		}
		if (op == 'D') {
			if (cursor != editor.end()) cursor++;

		}
		if (op == 'B') {
			if (cursor != editor.begin()) {
				cursor--;
				cursor = editor.erase(cursor);
			}
		}
		if (op == 'P') {
			char add;
			cin >> add;
			editor.insert(cursor, add);
		}
	}

	for (auto c : editor) cout << c;

	return 0;
}