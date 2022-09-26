#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

int main() {
	//ÇÀÂÄÀÍÍß 2
	float x, y, z;
	x = 1.44;
	y = 1.41;
	z = -3.96;

	float x_p = -1, x_k = 1;
	float dx = 0.2;
	cout << "\t\t+---------------+---------------+---------------+" << endl;
	cout << "\t\t|      x        |      a     \t|      b     \t|" << endl;
	cout << "\t\t+---------------+---------------+---------------+" << endl;
	for (x = x_p; x <= x_k; x += dx) {
		float b1, b2, b3, b;
		b1 = (pow(fabs(y - x), 2)) / (pow(fabs(z - 1), 1.34));
		b2 = (pow((z - x), 2)) / (pow(sin(z), 2));
		b3 = (pow(fabs(y - z), 3)) / cos(y * y);
		b = 1 + b1 + b2 + b3;

		float a1, a2, a3, a4, a5, a;
		a1 = pow((x + y), 2);
		a2 = x + pow(z, 3);
		a3 = pow((pow(b, 2) + y), 2);
		a4 = 1 + exp(-x + y) + pow(fabs(z), 0.34);
		a5 = a2 / a3;
		a = a1 + a5 / a4;
		cout << "\t\t| " << x << "\t        | " << a << "\t| " << b << "\t|" << endl;
		cout << "\t\t+---------------+---------------+---------------+" << endl;
	}

	return 0;
}