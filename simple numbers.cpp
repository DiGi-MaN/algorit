#include <iostream>
using namespace std;
class simple {
	int n, y=0, i, j;
public:
	void input();
	void test();
	void output();
};
void simple::input() {
	cout << "Input first number "<< "x= ";
	cin >> n;
}
void simple::output() {
	cout << "simple number is " << n << endl;;
}
void simple::test() {
	i = 2; j = 0;
	while (y<10) {
		while ((j != 1) && (i * i <= n)) {
			if (n % i == 0) {
				j = 1;
				i = i++;
			}
			else {
				i = i++;
			}
		}
		if (j != 1) {
			output();
				n++;
				y++;
			}
		else {
			n++;
		}
		i = 2; j = 0;
		}
	}
void main() {
	simple A;
	A.input();
	A.test();
}