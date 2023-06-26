#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	cin >> n >> k;

	list<int> L = {};
	for (int i = 1; i < n + 1; i++) L.push_back(i);
	auto cursor = L.begin();

	cout << "< ";
	while (true) {
		for (int i = 0; i < k - 1; i++) {

			if (cursor == L.end()) cursor = L.begin();
			cursor++;
			if (cursor == L.end()) cursor = L.begin();
			
		}
		cout << *cursor;
		cursor = L.erase(cursor);
		n--;
		if (L.empty()) break;
	    cout<< ", ";
	}
	cout << ">";
	return 0;
}