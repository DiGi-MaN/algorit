#include <iostream>
using namespace std;
class Tab {
private:
	double xs, xk, dx, i, y;
public:
	void input();
	void calc();
	void output();
	void task();
	virtual double func(double);
};
class Solve : public Tab
{
	double func(double x)
	{
		return x * x + 1;
	}
};
void Tab::input() {
	cout << "Input data \n";
	cout << "xs="; cin >> xs;
	cout << "xk="; cin >> xk;
	cout << "dx="; cin >> dx;
}
void Tab::output() {
	cout << "x=" << i << '\t' << "y=" << y << endl;
}
void Tab::calc() {
	for (i = xs; i <= xk; i += dx)
	{
		y = func(i); output();
	}
}
void Tab::task() {
	input();
	cout << "\n Output data \n";
	calc();
}
double Tab::func(double x)
{
	return x;
}
void main() {
	Solve A;
	A.task();
}
