#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;

	int i = 1;
	while (i <= n) {
		int space = 1;
		while (space <= n - i) {
			cout << " ";
			space = space + 1;

		}
		int no = 1;
		while (no <= 2 * i - 1) {
			cout << no << " ";
			no = no + 1;
		}
		cout << endl;
		i = i + 1;
	}


	return 0;
}

