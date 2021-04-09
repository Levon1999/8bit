#include<iostream>
using namespace std;
int main() {
	int arr[4] = { 3,5,99,4 };
	int min = arr[0];
	for (int i = 0; i < 4; ++i) {
		if (min >arr[i]) {

			min = arr[i];
		}
	}
	cout << min;
	return 0;

}