#include<iostream>
using namespace std;

int main() {
	
	int a[10];

	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	// update array value
	for (int i = 0; i <= 9; i++) {
		a[i] = a[i] * a[i];
	}
	//output
	for (int i = 0; i <= 9; i++) {
		cout << a[i] << ",";
	}
	cout << endl;

	//output in reverse order
	for (int i = 9; i >= 0; i--) {
		cout << a[i] << ",";
	}
	
	return 0;
}