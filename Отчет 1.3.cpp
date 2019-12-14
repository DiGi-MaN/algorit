/*

	Класс, описывающий массив данных
	n - размер массива
	*x - сам массив
	
*/

#include <iostream>
using namespace std;
class mass {
	int n, * x;
public:
	mass();
	mass(int k);
	~mass();
	void inmass();
	void outmass();
};
mass::mass(int k) :n(k) {
	x = new int[n];
}
mass::~mass() {
	delete[]x;
}
void mass::inmass() {
	cout << "Input" << endl;
	for (int i = 0; i < n; i++) {
		cout << "x[" << i << "]";
		cin >> x[i];
		cout << endl;
	}
}
void mass::outmass() {
	cout << "Output" << endl;
	for (int i = 0; i < n; i++) {
		cout << "x[" << i << "]= " << x[i] << endl;
	}
}

void main()
{
	int n;
	cin >> n;
	mass* M;
	M = new mass(n);
	M->inmass();
	M->outmass();
	delete M;
}
