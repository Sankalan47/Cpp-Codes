#include<iostream>
using namespace std;

int main() {
	int a[10];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	//input the key
	int key;
	cin >> key;
	//linear search
	int i;
	for (i = 0; i < n; i++) {
		if (key == a[i]) {
			cout << "element present" <<i;
			break;
		}
	}
	if (i == n) {
		cout << key << "is not present";
	}
	return 0;
}