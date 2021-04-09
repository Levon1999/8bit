#include<iostream>
struct Student {
	std::string name;
	std::string surname;
	short age;
};
int main() {
	Student Aek1;
	Aek1.name = "Levon ";
	Aek1.surname = "Karapetyan ";
	Aek1.age = 21;
	Student Aek2;
	Aek2.name = "Zaven ";
	Aek2.surname = "Minasyan ";
	Aek2.age = 21;
	Student Aek3;
	Aek3.name = Aek1.name;
	Aek3.surname = Aek2.surname;
	Aek3.age = (Aek1.age + Aek2.age) / 2;
	std::cout << Aek3.name
	          << Aek3.surname
		      <<Aek3.age;
	return 0;
}