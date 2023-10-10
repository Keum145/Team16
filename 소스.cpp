#include <iostream>
using namespace std;
void PrintMe(int ii) {
	cout << "  I am " << ii << "  years old.\n";
}
void PrintMe(float xx) {
	cout << "  I am " << xx << "  cm tall.\n";
}
	void PrintMe(double zz) {
		cout << " I am " << zz << "Kg.";
}

void PrintMe(int ii, float xx, double zz) {
	PrintMe(ii);
	PrintMe(xx);
	PrintMe(zz);
}
void main() {
	float height = 180.0;
	int age = 22;
	double weight = 75.2;
	PrintMe(age);
	PrintMe(height);
	PrintMe(weight);
	PrintMe(age, height, weight);
	getchar();
}