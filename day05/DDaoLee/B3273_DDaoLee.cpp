//B3273 - 두 수의 합
#include <iostream>

using namespace std;

// 스택의 크기가 크다면 전역변수로 선언
// 시간 초과를 방지하기 위해 배열 하나를 이용
int chk[2000001] = { 0 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, input;
	int cnt = 0;
	
	// 인덱스를 이용하여, 입력 값들이 존재하는지만 0,1로 확인.
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		chk[input]++;
	}
	cin >> x;

	// 범위를 반으로 나눈 이유 -> 합해서 9 라면, 5를 기준으로 1 <-> 8 처럼 대칭이기 때문.
	// 1(i) , 8(x-i)가 있다면 1쌍 존재.
	for (int i = 0; i < (x + 1) / 2; i++) {
		if ((chk[i] == 1) && chk[x - i] == 1) cnt++;
	}
	cout << cnt;

	return 0;
}