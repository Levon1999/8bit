#include <iostream>
#include <string>
using namespace std;
struct Student {
	string name;
	string surname;
	short age;
	string ararka;
};
int main() {
	Student Agroekologia1;
	Agroekologia1.name = "Levon";
	Agroekologia1.surname = "Karapetyan";
	Agroekologia1.age = 21;
	Agroekologia1.ararka = "Xaxoxagorcutyun";

	Student Agroekologia2;
	Agroekologia2.name = "Pargev";
	Agroekologia2.surname = "Minasyan ";
	Agroekologia2.age = 20;
	Agroekologia2.ararka = "Organakan Gyux.";

	if (Agroekologia1.age > Agroekologia2.age) {
		std::cout << Agroekologia1.name;
	}
	else {
		std::cout << Agroekologia2.name;
	}
	return 0;
}
