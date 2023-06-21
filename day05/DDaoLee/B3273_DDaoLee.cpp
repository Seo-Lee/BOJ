//B3273 - �� ���� ��
#include <iostream>

using namespace std;

// ������ ũ�Ⱑ ũ�ٸ� ���������� ����
// �ð� �ʰ��� �����ϱ� ���� �迭 �ϳ��� �̿�
int chk[2000001] = { 0 };

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, x, input;
	int cnt = 0;
	
	// �ε����� �̿��Ͽ�, �Է� ������ �����ϴ����� 0,1�� Ȯ��.
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		chk[input]++;
	}
	cin >> x;

	// ������ ������ ���� ���� -> ���ؼ� 9 ���, 5�� �������� 1 <-> 8 ó�� ��Ī�̱� ����.
	// 1(i) , 8(x-i)�� �ִٸ� 1�� ����.
	for (int i = 0; i < (x + 1) / 2; i++) {
		if ((chk[i] == 1) && chk[x - i] == 1) cnt++;
	}
	cout << cnt;

	return 0;
}