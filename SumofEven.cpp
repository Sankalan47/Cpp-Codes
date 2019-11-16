#include<iostream>
using namespace std;

int main() {
	int n, x = 2, s = 0;
	cin >> n;
	while (x <= n) {
		s = s + x;
		x = x + 2;

	}
	cout << s << endl;
	return 0;
}