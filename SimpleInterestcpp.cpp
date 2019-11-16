#include<iostream>
using namespace std;
int main() {
	//declaration of variables
	int p;
	float r, t, si;
	//taking inputs
	cin >> p >> r >> t >> si;
	//Arithmatic operation
	si = (p * r * t) / 100;
	cout << "simple interest is" << si;
	return 0;
}