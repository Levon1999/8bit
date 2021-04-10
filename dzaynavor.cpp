#include <iostream>
#include <string>
using namespace std;
int main() {
	string s = "Vahagn";
	char x = 'a';
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == x) {
			cout << ' ';
		}
		else {
			cout << s[i];
		}
	}
	return 0;
}