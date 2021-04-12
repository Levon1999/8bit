/*grel funkcia,vor@ stanum e qarakusayin havasarman tvyalner@*/
#include <iostream>
using namespace std;
void qarakusi(int a, int b) {
	a = b * b;
	cout << a;
}
int main() {
	int z = 0;
	int x = 0;
	cin >> z;
	cin >> x;
	qarakusi(z,x);
	return 0;
}