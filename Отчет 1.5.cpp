/*

	Реализация наследования классов на примере суммы двух чисел
	a - первое число
	b - второе число

*/

#include <iostream>
using namespace std;
class first {
private:
	int a;
public:
	void ina() { cout << "Input number a "; cin >> a; }
	int outa() { return a; }
};
class second :public first {
private: int b;
public:
	void inb() { cout << "Input number b "; cin >> b; }
	int sum() { return outa() + b; }
	int outb() { return b; }
};
void main()
{
	second B;
	B.ina();
	B.inb();
	cout << "Output " << B.outa() << "+" << B.outb() << "=" << B.sum() << endl;
}
