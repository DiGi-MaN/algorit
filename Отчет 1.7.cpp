#include <iostream>
using namespace std;

class Base {
public:
	static int a;
	void outF() { cout << "Base"; }

	virtual void OutS() { cout << "\n Virtual Base"; }
};

int Base::a = 5;

class Der : public Base
{
public:
	static int a;
	void outF() { cout << "\n Der"; }

};

int Der::a = 10;

void main() {
	Base* A = new Base;
	A->outF();
	A->OutS();
	cout << "\n Test";
	delete A;

	A = new Der;
	A->outF();
	A->OutS();
	cout << "\n Test N2";
	delete A;

	Der B;
	B.outF();
	B.OutS();
	cout << "\n" << B.a << '\t' << B.Base::a << "\n";
}
