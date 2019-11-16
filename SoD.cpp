#include<iostream>
using namespace std;

int main() {

	int n, sum = 0;
	cin >> n;
	while (n > 0) {
		int last_d = n % 10;
		sum = sum + last_d;
		n = n / 10;

	}
	cout << "the sum is" << sum << endl;

	return 0;
}