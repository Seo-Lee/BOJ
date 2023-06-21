//B2446 - º° Âï±â 9
#include <iostream>

using namespace std;

int main() {
	
	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;

	for (int i = 0; i < num; i++) {

		for (int j = 0; j < i; j++) cout << " ";
		for (int k = 0; k < 2*(num - i) - 1; k++) cout << "*";
		cout << "\n";
	}

	for (int i = 2; i < num + 1; i++) {
		
		for (int j = 0; j < num - i; j++) cout << " ";
		for (int k = 0; k < 2 * i - 1; k++) cout << "*";
		cout << "\n";
	}

	return 0;
}