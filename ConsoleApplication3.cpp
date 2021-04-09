#include<iostream>
using namespace std;
int main() {
	int arr[4] = { 2,22,6,66 };
	int max = arr[0];
	for (int i = 0; i < 4; ++i) {
		if (arr[i] > max) {
			max = arr[i];
		}

	}
		cout << max<< endl;
	
	return 0;
}
