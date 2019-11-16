#include<iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	int a[1000];
	int maxsum = 0;
	int currentsum = 0;
	int left = -1;
	int right = -1;
	for (int i = 0; i < n; i++) {
		cin >> a[i];

	}

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			//elements of subarray (i,j)
			currentsum = 0;
			for (int k = i; k <= j; k++) {
				//calculating the sum;
				currentsum += a[k];
			}

			//updating the max sum
			if (currentsum > maxsum) {
				maxsum = currentsum;
				left = i;
				right = j;
			}
		}
	}
	cout << maxsum;
	//print the subArray
	for (k = left; k <= right; k++) {
		cout << a[k];
	}
	return 0;
}