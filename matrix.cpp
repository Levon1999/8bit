#include <iostream>
using namespace std;
int main() {
	int arr[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,9},
	};
	int tmp;
	int z;
	for (int i = 0; i < 3; ++i) {
		tmp = arr[i][i];
	};
	for (int j = 0; j < 3; ++j) {
		z = arr[ 2-j][j];
	}
	swap(z, tmp);
	cout << z<<tmp;
	return 0;
}