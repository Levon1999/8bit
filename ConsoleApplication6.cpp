#include <iostream>
int main() {
	int a=0,b=0 , x=0;
	std::cout << "Nermucel tiv " << std::endl;
	std::cin >> a;//123
	while (a != 0) {
		x = a % 10;//12.3
		a = a / 10;//12.3/10=1.2
		b = b * 10 + x;//10+3.2.1
	}
	std::cout << "b=" << b;
	return 0;
}