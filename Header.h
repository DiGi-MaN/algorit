#pragma once
#include <iostream>
#include <locale.h>

using namespace std;

class Base {
private:
	int len, * x;
public:
	virtual void sort() = 0;
};

class integer :public Base {
	int len, * x;
public:
	integer(int k) :len(k) {
		x = new int[len];
	}
	~integer() {
		delete[]x;
	}
	void inmass() {
		cout << "Vvod elementov massiva " << endl;
		for (int i = 0; i < len; i++) {
			cout << "x[" << i << "]= " << endl;
			cin >> x[i];
		}
	}
	void outmass() {
		cout << "Vivod elementov massiva " << endl;
		for (int i = 0; i < len; i++) {
			cout << "x[" << i << "]= " << x[i] << endl;
		}
	}
	void sort() override {
		for (int i = 0; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				if (x[i] < x[j])
				{
					int buf = x[i];
					x[i] = x[j];
					x[j] = buf;
				}
			}
		}
	}
};

class doub : public Base {
	int len;
	double* x;
public:
	doub(int k) :len(k) {
		x = new double[len];
	}
	~doub() {
		delete[]x;
	}
	void in_a() {
		cout << "Vvod elementov massiva " << endl;
		for (int i = 0; i < len; i++) {
			cout << "x[" << i << "]= " << endl;
			cin >> x[i];
		}
	}
	void out_a() {
		cout << "Vivod elementov massiva " << endl;
		for (int i = 0; i < len; i++) {
			cout << "x[" << i << "]= " << x[i] << endl;
		}
	}
	void sort() override {
		for (int i = 0; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				if (x[i] < x[j])
				{
					double buf = x[i];
					x[i] = x[j];
					x[j] = buf;
				}
			}
		}
	}
};
class str :public Base {
	int len;
	string* x;
public:
	str(int k) :len(k) {
		x = new string[len];
	}
	~str() {
		delete[]x;
	}
	void in_b() {
		cout << "Vvod elementov massiva " << endl;
		for (int i = 0; i < len; i++) {
			cout << "x[" << i << "]= " << endl;
			cin >> x[i];
		}
	}
	void out_b() {
		cout << "Vivod elementov massiva " << endl;
		for (int i = 0; i < len; i++) {
			cout << "x[" << i << "]= " << x[i] << endl;
		}
	}
	void sort() override {
		for (int i = 0; i < len; i++) {
			for (int j = i + 1; j < len; j++) {
				if (x[i] < x[j])
				{
					string buf = x[i];
					x[i] = x[j];
					x[j] = buf;
				}
			}
		}
	}
};
