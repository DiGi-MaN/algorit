#pragma once
#include <iostream>
#include <ctime>
using namespace std;
class Base {
public:
	Base();
	~Base();
	void in_1();
	void out_1();
	int** mas, m, n;
};
class second :public Base {
private: int** mas2, x, y, ** mas3;
public:
	second();
	~second();
	void in_2();
	void out_2();
	void multi();
};
