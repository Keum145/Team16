#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
const float PI = 3.141592;
int main() {
	float t, f0, T, dt;
	f0 = 110;
	T = (1 / f0) * 3;
	dt = (1 / f0) / 20;
	ofstream xxx;
	xxx.open("cosinout.txt");
	if (!xxx) { cout << " can not open file"; return 666; }
	for (t = 0; t < T; t += dt) {
		xxx << t << "  " << exp(-f0 * t) * cos(2 * PI * f0 * t) << "  " << exp(-f0 * t) * sin(2 * PI * f0 * t) << endl;
	}
	return 123;

}