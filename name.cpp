﻿#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "Vaspur";
	for (int i = s.size(); i >= 0; --i) {
		cout << s[i];
	}
	return 0;
}