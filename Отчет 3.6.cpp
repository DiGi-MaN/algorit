#include <math.h>
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
class Arec {
private: fstream filename;
public: Arec(char*);
	  ~Arec();
	  void outfile(double, double, double);
	  virtual double fn(double) = 0;
};
Arec::Arec(char* name) {
	filename.open(name, ios::out | ios::trunc); 
		if (!filename) { cout << "error\n"; exit(1); }
}
Arec::~Arec() { filename.close(); }
void Arec::outfile(double xn, double xk, double dx) {
	int i = 0;
	filename << "Output data\n";
	for (double x = xn; x <= xk; x += dx) {
		filename.setf(ios::right);
		filename.width(4);
		filename.fill(' ');
		filename << i++ << "\t";
		filename.setf(ios::left | ios::fixed | ios::showpoint);
		filename.width(5); filename << x << "\t";
		filename.width(9); filename.precision(4);
		filename << fn(x) << "\n";
		filename.unsetf(ios::left | ios::fixed | ios::showpoint);
	}
}
class Two :public Arec {
public: Two(char* name): Arec(name) {};
	  double fn(double);
};
double Two::fn(double x) {
	return 1e6 / sqrt(x * x + 1);
}
void main() {
	char name[20];
	cout << "Input\n";
	cout << "filename: ";
	cin >> name;
	Two* Z;
	Z = new Two(name);
	Z->outfile(0.0, 1.0, 0.1);
	delete Z;
	fstream fl;
	fl.open(name, ios::in);
	char buf[80];
	fl >> buf;
	cout << buf << endl;
	double a, b, c;
	fl >> a >> b >> c;
	while (!fl.eof()) { cout << setw(2) << a << "\t" << setw(4) << b << "\t" << setw(5) << c << "\t"; }
	fl >> a >> b >> c;
	fl.close();
}