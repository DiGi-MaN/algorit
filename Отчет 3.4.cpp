#include <iostream>
using namespace std;
template<class T>
class Arr {
private: int n;
public: Arr(int k = 1) :n(k) {};
	  void test();
};
template <class T>
void Arr<T>::test() {
	int i, m = 59, y;
	for (i = m; i < m + n; i++) {
		y = T(i);
		cout << y << "\t";
	}
	cout << "\n";
}
void main() {
	Arr<int>A(5);
	A.test();
	Arr<char>B(7);
	B.test();
}
