#include<iostream>
#include<minmax.h>
using namespace std;

int main() {


	int c1, c2, c3, c4,n,m;
	int t;
	cin >> t;
	int rick[1005], cab[1005];
	while (t--) {
		cin >> c1 >> c2 >> c3 >> c4;

		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			cin >> rick[i];
		}
		for (int i = 0; i < m; i++) {
			cin >> cab[i];
		}
		int rickCost = 0;
		for (int i = 0; i < n; i++) {
			rickCost += min(c1 * rick[i], c2);
		}
		rickCost = min(c3, rickCost);

		int rickCost = 0;
		for (int i = 0; i < n; i++) {
			rickCost += min(c1 * rick[i], c2);
		}
		rickCost = min(c3, rickCost);

		int cabCost = 0;
		for (int i = 0; i < m; i++) {
			cabCost += min(c1 * cab[i], c2);
		}
		cabCost = min(c3, cabCost);

		int finalAns = min(c4, cabCost + rickCost);
		cout << finalAns;
	}
	


	return 0;
}