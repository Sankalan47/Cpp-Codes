#include<iostream>
using namespace std;

int main() {
	int a=0, b=1, c = a+b;
	int n;
	cin >> n;
	int p;
	cin >> p;
	cout << "0,1,";
	int i = 2;
	while (i < n) {
		cout << c<<",";
		a = b;
		b = c;
		c = a + b;
		i = i + 1;
		
	}
	if (p == c) {
		cout << "not fibonacci" << endl;
	}
	else
	{
		cout << "fibonacci" << endl;
	}
	return 0;
}