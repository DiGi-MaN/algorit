// Sort.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Header.h"
void main()
{
	Base* A;
	cout << "Input type of array" << endl;
	cout << "1 - integer, 2 - double, 3 - symbols" << endl;
	int type;
	cin >> type;
	switch (type){
	case 1: {int len;
		cout << "Vvedite colvo elementov massiva " << endl;
		cin >> len;
		integer* B;
		B = new integer(len);
		B->inmass();
		B->sort();
		B->outmass();
		delete B;
		break;
	}
	case 2: {
		int len;
		cout << "Vvedite colvo elementov massiva " << endl;
		cin >> len;
		doub* B;
		B = new doub(len);
		B->in_a();
		B->sort();
		B->out_a();
		delete B;
		break;
	}
	case 3:
		int len;
		cout << "Vvedite colvo elementov massiva " << endl;
		cin >> len;
		str* B;
		B = new str(len);
		B->in_b();
		B->sort();
		B->out_b();
		delete B;
		break;
	}
	
}

