#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int i;
	i = 2;
	while (i <= n - 1) {
		if (n % i==0) {
			cout << "not prime";
			break;
		}
		i = i + 1;
	}
	if (i == n) {
		cout << "prime";
	}
}