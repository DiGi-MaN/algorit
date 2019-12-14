/*

	

*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
template<class U>
class Tcont {
private: U* m_p;
	   int ms;
public: Tcont(int);
	  ~Tcont();
	  U& getE(int);
};
template <class U> Tcont<U>::Tcont(int n) :ms(n) {
	m_p = new U[ms];
}

template <class U> Tcont<U>::~Tcont() {
	delete[]m_p;
}

template<class U> U& Tcont<U>::getE(int i) {
	return (m_p[i+1]);
}
struct Rec
{
	int nm;
	char name[80];
};
void main() {
	int i;
	Tcont<int>D(5);
	for (i = 1; i <= 5; i++) {
		D.getE(i) = i;
		cout << "\nContainer D\n";
	}
	for (i = 0; i < 5; i++) {
		cout << D.getE(i) << "\n";
		cout << "\n";
	}
	Rec z[] = { {1, "SSS"}, {2, "FFF"}, {3, "AAA"} };
	Tcont<Rec>* p = new Tcont<Rec>(3);
	for (i = 0; i < 3; i++) {
		p->getE(i).nm, z[i].nm;
		strcpy(p->getE(i).name, z[i].name);
	}
	cout << "\nContainer *p\n";
	for (i = 0; i < 3; i++) {
		cout << p->getE(i).nm << "\t";
		cout << p->getE(i).name << "\t";
	}
	delete[]p;
}


