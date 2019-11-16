#include<iostream>
#include<cstdio>
using namespace std;

int main() {

	int n, p;
	cin >> n >> p;
	int ans = 0;
	float inc = 1;
	int times = 0;
	while (times <= p) {
		while (ans * ans <= n) {
			ans = ans + inc;

		}
		ans = ans - inc;
		inc = inc / 10;
		times = times + 1;
	}
	cout << ans << endl;
	printf("%.6f", ans);
	
}