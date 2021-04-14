#include <iostream>
int rec_fib(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
		return rec_fib(n - 1) + rec_fib(n - 2);
}
int main() {
	int n;
	std::cin >> n;
	std::cout << rec_fib(n);
	return 0;
}