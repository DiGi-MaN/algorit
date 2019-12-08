#include <iostream>
#include <math.h>
using namespace std;
class Base {
public: double S;
	  void OutS() { S = Sq(); cout << "Square = " << S << endl; }
	  virtual double Sq() = 0;
	  virtual void input() = 0;
};
class Tri :public Base {
public: int a, b, c;
	  double p;
	  void input() {
		  cout << "Input a,b,c a= "; cin >> a;
		  cout << "\n b= "; cin >> b;
		  cout << "\n c= "; cin >> c;
	  }
	  double Sq();

};
double Tri::Sq() {
	p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
class rect :public Base {
public: int a, b;
	  double p;
	  void input() {
		  cout << "Input a,b a= "; cin >> a;
		  cout << "\n b= "; cin >> b;
	  }
	  double Sq();

};
double rect::Sq() {
	return a*b;
};
class circle :public Base {
public:
	int r;
	void input() {
		cout << "Input r "; cin >> r;

	}
	double Sq();
};
double circle::Sq() {
	return 3.14 * r * r;
}
int main()
{
	Base* A = 0;
	cout << "Input figure" << endl;
	int type;
	cin >> type;
	switch (type) {
	case 1: A = new Tri; break;
	case 2:A = new rect; break;
	case 3: A = new circle; break;
	default:cout << "error" << endl;
	}
	A->input();
	A->OutS();
}
