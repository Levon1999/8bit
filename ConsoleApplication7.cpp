#include <iostream>
using namespace std;
int main() {
	int a = 0;
	int x = 0, y = 0, z = 0, i = 0;
	cin >> a;
	x = a / 1000;
	y = (a % 1000) / 100;
	z = (a % 100) / 10;
	i = a % 10;
	cout << x << " " << y << " " << z << " "<<i ;
	return 0;
}