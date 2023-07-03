#include <bits/stdc++.h>

using namespace std;
unordered_map<string, int> waitlist_rank;
vector<pair<int, string>> waitlist;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int K, L;
	string sid;
	int idx = 1;

	cin >> K >> L;

	while (L--) {
		cin >> sid;
		waitlist_rank[sid] = idx;
		idx++;
	}

	for (auto i : waitlist_rank) waitlist.push_back({ i.second, i.first });

	sort(waitlist.begin(), waitlist.end());

	// 수강 신청 인원보다 대기자 리스트가 적을 수 있다.
	K = min(K, (int)waitlist.size());

	for (int i = 0; i < K; i++) cout << waitlist[i].second << "\n";

	return 0;
}
