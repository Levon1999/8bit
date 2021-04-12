#include<iostream>
using namespace std;
int main() {
	int arr[4] = { 2,22,6,66 };
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < 4; ++i) {
		if (arr[i] < max) {
			max = arr[i];
		}
	}
	for (int z = 0; z < 4; ++z) {
		if (arr[z] > min) {
			min = arr[z];
		}
	}
	cout << max +min<< endl;

	return 0;
}