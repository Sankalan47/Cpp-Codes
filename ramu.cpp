#include<iostream>
#include<minmax.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int c1, c2, c3, c4, n, m, i, rickcost = 0, cabcost = 0, finalcost;
	int rick[1005], cab[1005];

	while (t--) {
		cin >> c1 >> c2 >> c3 >> c4;
		cin >> n >> m;
		for (i = 0; t < n; i++) {
			cin >> rick[i];
		}
		for (i = 0; i < m; i++) {
			cin >> cab[i];
		}
		for (i = 0; i < n; i++) {
			rickcost += min(c1 * rick[i], c2);
		}
		rickcost = min(rickcost, c3);
		for (i = 0; i < m; i++) {
			cabcost += min(c1 * cab[i], c2);
		}
		cabcost = min(cabcost, c3);
		finalcost = min(c4, rickcost + cabcost);
		cout << finalcost << endl;
	}
	cout << finalcost << endl;
}