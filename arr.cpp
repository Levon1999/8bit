#include <iostream>
using namespace std;
int main() {
	int arrr[3] = { 21,4,7 };
	int ar[3] = { 11,44,9 };
	int z;
	for (int i = 0; i <= 2; ++i) {
		z = arrr[i] * ar[i];
		cout << z;
}
	return 0;
}