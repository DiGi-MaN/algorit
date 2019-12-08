#include <iostream>
using namespace std;
class Sum {
private:
	double x, y;
public:
	void input1();
	void input2();
	double output1() {
		return x;
	}
	double output2() {
		return y;
	}
	double summa() {
		return x + y;
	}
};
void Sum::input1() {
	cout << "Input data in";
	cout << "x= ";
	cin >> x;
}
void Sum::input2() {
	cout << "Input data in";
	cout << "y= ";
	cin >> y;
}
void main()
{
	Sum A;
	A.input1();
	A.input2();
	cout << "Output data" << endl;
	cout << A.output1() << "+" << A.output2() << "=" << A.summa() << endl;
}
