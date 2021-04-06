#include<iostream>
#include <bitset>
using namespace std;
int main() {
	cout << "Greq voreve drakan tiv " << endl;
	unsigned int x = 0;
	cin >> x;
	bitset<8>inputbits(x);
	cout << x << " Erkuakan hamakargum = " << inputbits << endl;
	return 0;
}