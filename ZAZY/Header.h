#pragma once
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;
class Rabbit
{
public:
	int x, y, count;
	Rabbit(int, int);
	Rabbit();
	void jump(int, int);
	void increase(Rabbit*&, int, int);
	void death(Rabbit*&, int, int);
	void life(int amount, int ticks, int chance, Rabbit*&, int width, int height);
};
Rabbit::Rabbit(int width, int height) { //конструктор новых кроликов
	x = rand() % width + 1;
	y = rand() % height + 1;
	count = 0;
}
Rabbit::Rabbit() {
	x = 0;
	y = 0;
	count = 0;
}
void Rabbit::death(Rabbit*& Old, int n, int index) {

	int j = index; 

	Rabbit* New = new Rabbit[n]; //удаление како-либо кролика и создание нового массива

	for (int i = 0; i < index; i++)
	{

		New[i] = Old[i];

	}

	for (int i = index; i < n; i++)
	{

		j++;

		New[i] = Old[j];

	}

	delete[] Old;

	Old = New; //заменяем имя нового на имя старого, чтобы в остальном коде не было изменений

}
void Rabbit::jump(int width, int height) {
	int chance;

	chance = rand() % 9 + 1;
	switch (chance) {
	case 1: if (x < width) {
		x++;
	}
		  count++;
		  break;
	case 2: if ((x > 0) || (x = width)) {
		x--;
	}
		  count++;
		  break;
	case 3: if ((y < height) || (y == 0)) {
		y++;
	}
		  count++;
		  break;
	case 4: if ((y > 0) || (y = height)) {
		y--;
	}
		  count++;
		  break;
	case 5: if ((x < width) && (y < height)) {
		x++;
		y++;
	}
		  count++;
		  break;
	case 6: if ((x > 0) && (y > 0)) {
		x--;
		y--;
	}
		  count++;
		  break;
	case 7: if ((x > 0) && (y < height)) {
		x--;
		y++;
	}
		  count++;
		  break;
	case 8:if ((x < width) && (y > 0)) {
		x++;
		y--;
	}
		  count++;
		  break;
	case 9: {
		count++;
	}
		  break;
	}
}
void Rabbit::increase(Rabbit*& Old, int n, int index) {

	Rabbit* New = new Rabbit[n]; //создаем новый массив класса кролик (рождение нового кролика) и переписываем массив
	for (int i = 0; i < n - 1; i++)
	{

		New[i] = Old[i];

	}
	New[n - 1].x = Old[index].x;
	New[n - 1].y = Old[index].y;
	New[n - 1].count = 0;

	delete[] Old;

	Old = New; //заменяем 

}
void Rabbit::life(int amount, int ticks, int chance, Rabbit*& A, int width, int height) {
	int t, i, j, v;
	int number, child = 0;
	for (t = 0; t < ticks; t++)
	{
		cout << "Number of ticks: " << t << endl;
		number = amount;

		for (i = 0; i < amount; i++)
		{

			for (j = i + 1; j < amount; j++)
			{

				if (((A[i].x == A[j].x) && (A[i].y == A[j].y))&&(child<(width*height))) //рожденных кроликов не больше, чем площадь поля
				{
					
					v = rand() % 100 + 1;

					if (v <= chance)
					{

						number++;

						child++;

						A->increase(A, number, i);

					}

				}

			}

		}

		amount = number;

		for (i = 0; i < amount; i++)
		{

			A[i].jump(width, height); //прыжки кроликов по индексам

		}

		for (i = 0; i < amount; i++)
		{

			if (A[i].count == 20) { //если количество прыжков = 20, то кролик умирает
				cout << "Кролик умер" << endl;

				amount--;

				A->death(A, amount, i);

				i--;

			}

		}
		if (amount != 0)
		{
			for (i = 0; i < amount; i++)
			{

				cout << "Номер зайца " << i + 1 << endl;

				cout << "x= " << A[i].x << endl;

				cout << "y= " << A[i].y << endl;

				cout << "Количество прыжков " << A[i].count << endl;

				 
				cout << "\n" << endl;


			}
			cout << "Количество зайцев " << amount << endl;;

			cout << "Количество рожденных " << child << endl;
		}
		else
		{

			cout << "Никого нет в живых" << endl;;

		}
		
	}
}