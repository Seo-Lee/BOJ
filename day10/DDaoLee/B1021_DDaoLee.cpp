#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, m;
    cin >> n >> m;
    deque<int> DQ;
    for (int i = 1; i <= n; i++) DQ.push_back(i);
    int ans = 0;
    while (m--) {

        int location;
        cin >> location;

        int idx = find(DQ.begin(), DQ.end(), location) - DQ.begin(); // idx : t가 있는 위치

        while (DQ.front() != location) {
            if (idx < DQ.size() - idx) {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }
        DQ.pop_front();
    }
    cout << ans;
}
