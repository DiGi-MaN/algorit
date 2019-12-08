#include "Header.h"
int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	int width, height, chance, ticks, i,j,t,v;
	int amount;
	cout << "Input\n";
	cout << "Ширина поля "; cin >> width;
	cout << "Длина поля "; cin >> height;
	cout << "Шанс рождения "; cin >> chance;
	cout << "Количество тиков "; cin >> ticks;
	cout << "Количество зайцев в начале "; cin >> amount;
	Rabbit* A = new Rabbit[amount];   
	for (i = 0; i < amount; i++) {
		A[i] = Rabbit(width, height);
	}
	A->life(amount, ticks, chance, A, width, height);
	delete[] A;   

}