#include <iostream>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	int num;
	cin >> num;

	for (int i = 1; i < num + 1; i++) {

		// ((2*num -1) - (2*i -1))/2 = num - i
		for (int j = 0; j < (num - i); j++) cout << " ";
		for (int j = 0; j < (2 * i - 1); j++) cout << "*";

		cout << "\n";
	}

	return 0;
}