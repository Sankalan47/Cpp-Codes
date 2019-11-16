#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	
	int j;
	int val = 1;
	//j for row
	j = 1;
	while (j <= n) {
		int count = 1;
		while (count <= j) {
			cout << val << " ";
			val = val + 1;
			count = count + 1;
		}
		cout << endl;
		j = j + 1;
	}
}