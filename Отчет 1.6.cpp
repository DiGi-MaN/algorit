/*

	Сортировка одномерного массива пузырьком
	*n - массив
	len - длина массива

*/

#include <iostream>
using namespace std;
class mas {
private: int* n, len;
public:
	mas(int);
	~mas();
	int* ret_n() { return n; };
	int ret_len() { return len; };
	void in_n();
	void out_n();
};
class sort :public mas {
public:
	sort(int k = 1) :mas(k) {}
	void sort_n();
};
mas::mas(int k = 1) :len(k) {
	n = new int[len];
}
void mas::in_n() {
	for (int i = 0; i < len; i++) {
		cout << "n[" << i << "]= ";
		cin >> n[i];
		cout << endl;
	}
}
mas::~mas() {
	delete[]n;
}
void mas::out_n() {
	cout << "Output massive" << endl;
	for (int i = 0; i < len; i++) {
		cout << "n[" << i << "]= " << n[i] << endl;
	}
}
void sort::sort_n() {
	int temp, len, * n, a;
	n = ret_n();
	len = ret_len();
	for (int i = 0; i < len - 1; i++)
		for (int j = i + 1; j < len; j++)
			if (n[i] > n[j])
			{
				a = n[i];
				n[i] = n[j];
				n[j] = a;
			};

}
int main()
{
	int n, len;
	cout << "Input number of elements"; cin >> len;
	sort* O;
	O = new sort(len);
	O->in_n();
	O->sort_n();
	O->out_n();
	delete O;
	return 0;
}
