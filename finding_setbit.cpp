#include<iostream>
using namespace std;

int main() {

	int n;
	cin >> n;
	int ans = 0;
	for (; n > 0; n = n >> 1) {
		ans = ans + 1;
	}
	cout << ans;
	return 0;
}	