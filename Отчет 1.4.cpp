/*

	Класс, описывающий матрицу с возможностью нахождения максимального элемента
	n - размер по горизонтали 
	m - размер по вертикали
	**x - матрица
	
	Не уверен что работает как надо

*/

#include <iostream>
using namespace std;
class mtv {
	int n, m, ** x, * v;
public:
	mtv(int m, int n);
	~mtv();
	void inmass();
	void outmass();
	void vector();
	int max(int*);
	int* getvector();
};
mtv::mtv(int m = 1, int n = 1) : n(n), m(m) {
	x = new int* [m];
	for (int i = 0; i < m; i++)
		x[i] = new int[n];
	v = new int[m];
}
mtv::~mtv() {
	for (int i = 0; i < m; i++)
		delete[]x[i];
	delete[]x;
	delete[]v;

}
void mtv::inmass() {
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			x[i][j] = rand() % 100 + 1;
}
void mtv::outmass() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++)
			cout << "x[" << i << "]" << "[" << j << "]= " << x[i][j] << "\t";
		cout << endl;
	}
}
int mtv::max(int* S) {
	int maximum = S[0];
	for (int j = 0; j < n; j++)
		maximum = (S[j] > maximum) ? S[j] : maximum;
	return maximum;
}
void mtv::vector() {
	for (int i = 0; i < m; i++)
		v[i] = max(x[i]);
}
int* mtv::getvector() {
	return v;
}
int main()
{
	int m, n, * v;
	cout << "m" << endl;
	cin >> m;
	cout << "n" << endl;
	cin >> n;
	mtv* M;
	M = new mtv(m, n);
	M->inmass();
	M->vector();
	M->outmass();
	v = M->getvector();
	for (int i = 0; i < m; i++)
		cout << "v[" << i << "]= " << v[i] << endl;
	delete M;
}
