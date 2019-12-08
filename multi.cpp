// multi.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Header.h"
second::second() {
	int NSIZE1, MSIZE1;
	cout << "Введите количество строк второй матрицы = " << endl; cin >> MSIZE1;
	cout << "Введите количество столбцов второй матрицы = " << endl; cin >> NSIZE1;
	cout << endl;
	x = MSIZE1;
	y = NSIZE1;
	mas2 = new int* [x];
	for (int i = 0; i < x; i++) {
		mas2[i] = new int[y];
	}
}
second::~second() {
	for (int i = 0; i < x; i++)
		delete[]mas2[i];
	delete[]mas2;

}
Base::Base() {
	int NSIZE, MSIZE;
	cout << "Введите количество строк первой матрицы = " << endl; cin >> MSIZE;
	cout << "Введите количество столбцов первой матрицы = " << endl; cin >> NSIZE;
	cout << endl;
	m = MSIZE;
	n = NSIZE;
	mas = new int* [m];
	for (int i = 0; i < m; i++) {
		mas[i] = new int[n];
	}
}
Base::~Base() {
	for (int i = 0; i < m; i++) 
			delete[]mas[i];
    delete[]mas;
}
void Base::in_1() {
	srand(time(0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			mas[i][j] =rand()%20;
		}
	}
}
void Base::out_1() {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cout << mas[i][j] <<"\t";
		}
		cout << endl;
	}
}

void second::multi() {
	mas3 = new int* [m]; 
	if (n == x && m==y) {
		for (int i = 0; i < m; i++) {
			mas3[i] = new int[y]; {
				for (int j = 0; j < y; j++) {
					mas3[i][j] = 0;
					for (int k = 0; k < n; k++) {
						mas3[i][j] += mas[i][k] * mas2[k][j];
					}
				}
			}
		}
		cout << "Перемножение первой матрицы со второй" << endl;
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < y; j++) {
				cout << mas3[i][j] << "\t";
			}
			cout << endl;
		}
		for (int i = 0; i < m; i++)
			delete[]mas3[i];
		delete[]mas3;
	}
	else {
		cout << "\nОшибка. Количество строк первой матрицы не совпадает с количеством стобцов второй." << endl;
	}
	
	
}

void second::in_2(){
	srand(time(0));
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			mas2[i][j] = 10+ rand() % 20;
		}
	}
}
void second::out_2() {
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			cout << mas2[i][j] << "\t";
			
		}
		cout << endl;
	}

}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Для перемножения матриц необходимо, чтобы выполнялось условие:\n Количество строк первой матрицы = количество столбцов второй" << endl;
    second* B;
	B = new second;
	B->in_1();
	B->out_1();
	cout << "\n" << endl;
	B->in_2();
	B->out_2();
	cout << "\n" << endl;
	B->multi();

	return 0;
}
