/*

	Пример использования дружественной функции (friend)

*/

#include <iostream>
using namespace std;
class first {
public:
	int a;
	double b;
	void set_a() { cout << "a= "; cin >> a; }
	void set_b() { cout << "b= "; cin >> b; }
	friend void prvt(first&, int&, double&);
};
class second {
private: int x;
	   double y;
public: 
	void set_xy() {
	first B;
	B.set_a();
	B.set_b();
	prvt(B, x, y);
}
	void out_xy() {
		  cout << "x= " << x << "\t" << "y= " << y << "\n";
	};
	void prvt(first &A, int &u, double &v) {
		u = A.a;
		v = A.b;
	}
};
int main() {
	second C;
	cout << "Input\n";
	C.set_xy();
	cout << "\nOutput\n";
	C.out_xy();
}