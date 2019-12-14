/*

	Вторая производная заданной функции

*/

#include <iostream>
#include <math.h>
using namespace std;
class Base {
public:
	virtual double f(double) = 0;
	double diff(double, double);
};
double Base::diff(double x, double dx) {
	double dy, dzy, u, v;
	dy = (u = f(x + dx) - (v = f(x)));
	dzy = f(x + 2 * dx) - 2 * u + v;
	return(dy - 0.5 * dzy) / dx;
}
class Azt :public Base {
public:
	double f(double x) { return sin(x); };
};
void main() {
	double x;
	Azt* A = new Azt;
	cout << "Output data" << endl;
	for (x = 0; x <= 6.28; x += 0.1)
		cout << A->diff(x, 0.1) << "\t" << cos(x) << endl;
	delete A;
}