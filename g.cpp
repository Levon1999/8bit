#include <iostream>
using namespace std;
int main() {
	int x = 0;
	int a, s, d, f;
	cin >> x;
	a = x / 100;
	s = (x % 100) / 10;
	d = x % 10;
	f = a + s + d;
	cout << f;
	return 0;
}