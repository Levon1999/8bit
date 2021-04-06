#include <iostream>
using namespace std;
int main() {
	int numbers;
	cout << "GReq tiv " << endl;
	cin >> numbers;
	for (int i = 0; i <= numbers; ++i) {
		for (int j = 0; j < i; ++j) {
			cout << '*';
		}
		cout << endl;
	}
	return 0;
}
	
