#include<iostream>
using namespace std;

int main() {
	int currentsum = 0;
	int maxsum = 0;
	int a[100];
	int n;
	cin >> n; 
	int left = -1;
	int right = -1;
	int csum[100] = {0};
	cin >> a[0];
	csum[0] = a[0];
	for (int i = 1; i < n; i++) {
		cin >> a[i];
		csum[i] = csum[i - 1] + a[i];
	}
	
	
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			currentsum = 0;
			currentsum = csum[j] - csum[i - 1];
			if(currentsum > maxsum) {
				maxsum = currentsum;
				left = i;
				right = j;
			}
		}
	}

	cout << maxsum;
	return 0;
}