#include<iostream>
#include<minmax.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[1000];
	int csum = 0;
	int msum = 0;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//using kedans algo
	for (int i = 0; i < n; i++) {
		csum = csum + a[i];
		
		msum = max(msum, csum);
	}
	cout << msum;
	return 0;
}