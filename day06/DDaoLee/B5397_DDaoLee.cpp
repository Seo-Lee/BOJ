#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	while (n--) {
		string testCase;
		list<char> keyloger = {};

		cin >> testCase;
		list<char>::iterator cursor = keyloger.begin();

		for (auto c : testCase) {
			if (c == '<') {
				if (cursor != keyloger.begin()) cursor--;
			}
			else if(c == '>') {
				if (cursor != keyloger.end()) cursor++;

			}
			else if(c == '-') {
				if (cursor != keyloger.begin()) {
					cursor--;
					cursor = keyloger.erase(cursor);
				}
			}
			else {
				keyloger.insert(cursor, c);
			}

		}

		for (auto c : keyloger) cout << c;
		cout << "\n";

	}

	return 0;
}